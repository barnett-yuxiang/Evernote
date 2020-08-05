package com.ss.android.article.news;

import android.content.Context;
import android.util.Log;

import com.ss.android.common.app.AbsApplication;

public class ArticleApplication extends AbsApplication {
    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        Log.d("ArticleApplication", "ArticleApplication attachBaseContext");
    }
}
