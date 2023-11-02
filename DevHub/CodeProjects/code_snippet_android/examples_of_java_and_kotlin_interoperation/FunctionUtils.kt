package kamakura.lab.kotlin_java_interop_example_01

fun applyOperation(a: Int, b: Int, operation: (Int, Int) -> Int): Int {
    return operation(a, b)
}

val sum: (Int, Int) -> Int = { a, b -> a + b }
