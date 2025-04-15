data class Person(
    var name: String = "",
    var age: Int = 0,
    var address: String = ""
)

class PersonBuilder {
    private val person = Person()

    fun withName(name: String): PersonBuilder {
        person.name = name
        return this
    }

    fun withAge(age: Int): PersonBuilder {
        person.age = age
        return this
    }

    fun withAddress(address: String): PersonBuilder {
        person.address = address
        return this
    }

    fun build(): Person {
        return person
    }
}
