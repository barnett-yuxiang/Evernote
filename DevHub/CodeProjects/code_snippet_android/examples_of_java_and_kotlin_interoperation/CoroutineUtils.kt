package kamakura.lab.kotlin_java_interop_example_01

import kotlinx.coroutines.*
import java.util.concurrent.atomic.AtomicInteger

object CoroutineUtils {

    private val coroutineCount = AtomicInteger(0)

    // Define a coroutine function, which runs on IO dispatcher and returns result on main thread
    fun loadData(scope: CoroutineScope, callback: (String) -> Unit) {
        coroutineCount.incrementAndGet() // Increment coroutine counter
        scope.launch(Dispatchers.IO) {
            // Wait for 1 second
            delay(1000)
            val data = "Data loaded"
            // Switch to main thread
            withContext(Dispatchers.Main) {
                // Return result
                callback(data)

                val remainingCoroutines = coroutineCount.decrementAndGet()
                println("Remaining coroutines: $remainingCoroutines") // Print remaining coroutines()
            }
        }
    }
}
