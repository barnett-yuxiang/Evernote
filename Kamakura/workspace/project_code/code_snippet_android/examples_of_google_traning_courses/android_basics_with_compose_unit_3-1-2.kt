class Cookie(
    val name: String,
    val softBaked: Boolean,
    val hasFilling: Boolean,
    val price: Double
)

val cookies = listOf(
    Cookie(
        name = "Chocolate Chip",
        softBaked = false,
        hasFilling = false,
        price = 1.69
    ),
    Cookie(
        name = "Banana Walnut",
        softBaked = true,
        hasFilling = false,
        price = 1.49
    ),
    Cookie(
        name = "Vanilla Creme",
        softBaked = false,
        hasFilling = true,
        price = 1.59
    ),
    Cookie(
        name = "Chocolate Peanut Butter",
        softBaked = false,
        hasFilling = true,
        price = 1.49
    ),
    Cookie(
        name = "Snickerdoodle",
        softBaked = true,
        hasFilling = false,
        price = 1.39
    ),
    Cookie(
        name = "Blueberry Tart",
        softBaked = true,
        hasFilling = true,
        price = 1.79
    ),
    Cookie(
        name = "Sugar and Sprinkles",
        softBaked = false,
        hasFilling = false,
        price = 1.39
    )
)

fun main() {
    // forEach
    cookies.forEach {
        println("Menu item: ${it.name}")
    }

    // map
    val fullMenu = cookies.map {
        "${it.name} - $${it.price}"
    }
    println("\nFull menu:")
    fullMenu.forEach {
        println(it)
    }

    // filter
    val softBakedMenu = cookies.filter {
        it.softBaked
    }
    println("\nSoft cookies:")
    softBakedMenu.forEach {
        println("${it.name} - $${it.price}")
    }

    // groupBy
    val groupedMenu = cookies.groupBy {
        it.softBaked
    }
    val softBake = groupedMenu[true] ?: listOf()
    val crunchy = groupedMenu[false] ?: emptyList()
    println("\nSoft cookies:")
    softBake.forEach {
        println("${it.name} - $${it.price}")
    }
    println("\nCrunchy cookies:")
    crunchy.forEach {
        println("${it.name} - $${it.price}")
    }

    // fold
    val totalPrice = cookies.fold(0.0) { total, cookie ->
        total + cookie.price
    }
    println("\nTotal price: $${totalPrice}")

    // sortedBy
    val alphabeticalMenu = cookies.sortedBy {
        it.name
    }
    println("\nAlphabetical menu:")
    alphabeticalMenu.forEach {
        println(it.name)
    }

}
