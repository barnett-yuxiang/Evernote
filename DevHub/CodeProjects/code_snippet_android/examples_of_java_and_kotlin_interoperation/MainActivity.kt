package kamakura.lab.kotlin_java_interop_example_01

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.cancel

class MainActivity : AppCompatActivity() {

    private val coroutineScope = CoroutineScope(Dispatchers.Main)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // 101
        val javaClass = JavaClass()
        Toast.makeText(this, javaClass.callKotlinFunction(), Toast.LENGTH_SHORT).show()

        // 102
        val noteManager = NoteManager()
        noteManager.addAndDisplayNotes()

        // 103
        val operationManager = OperationManager()
        operationManager.performOperation()

        // 104
        val inlineManager = InlineManager()
        inlineManager.performActions()

        // 105
        val coroutineManager = CoroutineManager()
        coroutineManager.loadData(coroutineScope) // 使用传入的 CoroutineScope 调用 Kotlin 协程函数，并传递一个回调函数作为参数

    }

    override fun onDestroy() {
        super.onDestroy()
        coroutineScope.cancel()
    }
}
