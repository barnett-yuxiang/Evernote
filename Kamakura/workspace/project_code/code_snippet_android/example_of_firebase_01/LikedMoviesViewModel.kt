package com.google.firebase.codelabs.recommendations.viewmodels

import android.app.Application
import androidx.lifecycle.*
import com.google.firebase.analytics.FirebaseAnalytics
import com.google.firebase.analytics.ktx.analytics
import com.google.firebase.analytics.ktx.logEvent
import com.google.firebase.codelabs.recommendations.data.Movie
import com.google.firebase.codelabs.recommendations.data.MovieRepository
import com.google.firebase.ktx.Firebase
import kotlinx.coroutines.launch

/**
 * Provides the list of available movies and methods to like movies.
 */
class LikedMoviesViewModel internal constructor (application: Application) : AndroidViewModel(application) {
    private val firebaseAnalytics = Firebase.analytics
    val movies: MutableLiveData<MutableSet<Movie>> = MutableLiveData()
    init {
        viewModelScope.launch {
            movies.value = MovieRepository.getInstance(application.applicationContext).getContent().toMutableSet()
        }
    }

    /** Set movie to liked and log a Firebase Analytics event */
    fun onMovieLiked(movie: Movie) {
        movies.setLike(movie, true)
        logAnalyticsEvent(movie.id.toString())
    }
    fun onMovieLikeRemoved(movie: Movie) {
        movies.setLike(movie, false)
    }

    /**
     * Logs an event in Firebase Analytics that is used in aggregate to train the recommendations
     * model.
     */
    private fun logAnalyticsEvent(id: String) {
        firebaseAnalytics.logEvent(FirebaseAnalytics.Event.SELECT_ITEM) {
            param(FirebaseAnalytics.Param.ITEM_ID, id)
        }
    }

    /** Extension functions to set updates to observers when underlying list updates */
    private fun MutableLiveData<MutableSet<Movie>>.setLike(item: Movie, likeValue: Boolean) {
        val newVal = this.value
        newVal?.first { it.id == item.id }?.liked = likeValue
        this.value = newVal
    }
}
