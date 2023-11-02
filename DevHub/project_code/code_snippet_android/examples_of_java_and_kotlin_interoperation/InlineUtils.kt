package kamakura.lab.kotlin_java_interop_example_01

inline fun runTwice(action: () -> Unit) {
    action()
    action()
}
