package kamakura.lab.kotlin_java_interop_example_01

// 委托类
class BasicCounter : Counter {
    override var value = 0

    override fun increment() {
        value++
    }

    override fun decrement() {
        value--
    }

}
