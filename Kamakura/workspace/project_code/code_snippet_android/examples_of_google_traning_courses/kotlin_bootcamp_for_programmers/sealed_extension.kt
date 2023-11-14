sealed class Seal
class SeaLion : Seal()
class Walrus : Seal()

fun matchSeal(seal: Seal): String {
   return when(seal) {
       is Walrus -> "walrus"
       is SeaLion -> "sea lion"
   }
}

fun String.hasSpaces(): Boolean {
    val found = this.find { it == ' ' }
    return found != null
}
println("Does it have spaces?".hasSpaces())


