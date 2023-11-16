//
//
//

open class WaterSupply(var needsProcessing: Boolean)

class TapWater : WaterSupply(true) {
    fun addChemicalCleaners() {
        needsProcessing = false
    }
}

class FishStoreWater : WaterSupply(false)

class LakeWater : WaterSupply(true) {
    fun filter() {
        needsProcessing = false
    }
}

class Aquarium<out T : WaterSupply>(val waterSupply: T) {
    fun addWater(cleaner: Cleaner<T>) {
        if (waterSupply.needsProcessing) {
            cleaner.clean(waterSupply)
        }
        println("water added")
    }

    inline fun <reified R: WaterSupply> hasWaterSupplyOfType() = waterSupply is R
}

fun addItemTo(aquarium: Aquarium<WaterSupply>) = println("item added")

fun genericsExample() {
    val aquarium = Aquarium(TapWater())
    println("water needs processing: ${aquarium.waterSupply.needsProcessing}")
    aquarium.waterSupply.addChemicalCleaners()
    println("water needs processing: ${aquarium.waterSupply.needsProcessing}")

//    val aquariumV2 = Aquarium("string")
//    println(aquariumV2.waterSupply)

    addItemTo(aquarium)

    val cleaner = TapWaterCleaner()
    val aquariumV3 = Aquarium(TapWater())
    aquariumV3.addWater(cleaner)

    isWaterClean<TapWater>(aquarium)

    println(aquarium.hasWaterSupplyOfType<TapWater>())
}

// ========== in
interface Cleaner<in T : WaterSupply> {
    fun clean(waterSupply: T)
}

class TapWaterCleaner : Cleaner<TapWater> {
    override fun clean(waterSupply: TapWater) = waterSupply.addChemicalCleaners()
}

fun <T: WaterSupply> isWaterClean(aquarium: Aquarium<T>) {
    println("aquarium water is clean: ${!aquarium.waterSupply.needsProcessing}")
}

fun main() {
    genericsExample()
}
