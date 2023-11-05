package kamakura.lab.kotlin_java_interop_example_01;

import kotlin.Unit;
import kotlinx.coroutines.CoroutineScope;

public class CoroutineManager {
    /**
     * Loads data using the provided CoroutineScope.
     *
     * @param  scope  the CoroutineScope used to call the Kotlin coroutine function
     * @return        returns nothing
     */
    public void loadData(CoroutineScope scope) {
        // 使用传入的 CoroutineScope 调用 Kotlin 协程函数，并传递一个回调函数作为参数
        CoroutineUtils.INSTANCE.loadData(scope, data -> {
            System.out.println(data);
            return Unit.INSTANCE;
        });
    }
}
