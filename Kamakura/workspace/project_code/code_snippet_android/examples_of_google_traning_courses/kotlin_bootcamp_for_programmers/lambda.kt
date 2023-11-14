val waterFilter = { dirty: Int -> dirty / 2 }

data class Fish(val name: String)

inline fun myWith(name: String, block: String.() -> Unit) {
    name.block()
}

fun main() {
    waterFilter(30)

    val myFish = listOf(Fish("Flipper"), Fish("Moby Dick"), Fish("Dory"))

    val newMyFish = myFish.filter { it.name.contains("i") }.joinToString(", ") { it.name }
    println(newMyFish)

    // with
    val fish = Fish("splashy")
    with(fish.name) {
        println(capitalize())
    }
}
