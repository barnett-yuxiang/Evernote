package kamakura.lab.kotlin_java_interop_example_01

sealed class Operation {
    object Increment : Operation()
    object Decrement : Operation()
}
