package kamakura.lab.kotlin_java_interop_example_01

fun generateTasks(): List<Task> {
    return List(10) { index -> Task(index, "Task $index", index % 2 == 0) }
}

fun processTasks(tasks: List<Task>) {
    val completedTaskNames = tasks
        .filter { it.completed }
        .map { it.name }
    completedTaskNames.forEach { println(it) }
}
