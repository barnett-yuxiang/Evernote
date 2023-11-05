package kamakura.lab.kotlin_java_interop_example_01

interface Base {
    fun foo()
    fun bar()
}

class BaseImpl(val x: Int) : Base {
    override fun foo() {
        println("foo")
    }

    override fun bar() {
        println("bar")
    }

}

class Derived(b: Base) : Base by b

fun main(args: Array<String>) {
    val b = BaseImpl(10)
    val d = Derived(b)
    d.foo()
    d.bar()
}
