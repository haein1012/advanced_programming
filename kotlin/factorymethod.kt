abstract class Animal {
    abstract fun speak(): String
}

class Dog : Animal() {
    override fun speak() = "Woof!"
}

class Cat : Animal() {
    override fun speak() = "Meow!"
}

object AnimalFactory {
    fun createAnimal(type: String): Animal? = when (type) {
        "dog" -> Dog()
        "cat" -> Cat()
        else -> null
    }
}
