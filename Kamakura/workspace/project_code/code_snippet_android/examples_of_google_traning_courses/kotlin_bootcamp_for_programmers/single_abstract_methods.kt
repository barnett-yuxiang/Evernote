fun runExample() {
    val runnable = object : Runnable {
        override fun run() {
            println("I'm a Runnable")
        }
    }

    JavaRun.runNow {
        println("Last parameter is a lambda as a Runnable")
    }
}
