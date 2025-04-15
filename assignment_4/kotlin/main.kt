fun main() {
    println("[Adapter Pattern]")
    val adapter = Adapter(ExternalClass())
    println(adapter.fetch())

    println()
    println("[Decorator Pattern]")
    val basicCoffee = BasicCoffee()
    println("basicCoffee = BasicCoffee()")
    println("basicCoffee.cost() = ${basicCoffee.cost()}") // 5

    val coffeeWithMilk = MilkDecorator(basicCoffee)
    println("\ncoffeeWithMilk = MilkDecorator(basicCoffee)")
    println("coffeeWithMilk.cost() = ${coffeeWithMilk.cost()}") // 7

    val coffeeWithSugar = SugarDecorator(basicCoffee)
    println("\ncoffeeWithSugar = SugarDecorator(basicCoffee)")
    println("coffeeWithSugar.cost() = ${coffeeWithSugar.cost()}") // 6

    val coffeeWithMilkAndSugar = SugarDecorator(coffeeWithMilk)
    println("\ncoffeeWithMilkAndSugar = SugarDecorator(coffeeWithMilk)")
    println("coffeeWithMilkAndSugar.cost() = ${coffeeWithMilkAndSugar.cost()}") // 8

    println()
    println("[Facade Pattern]")
    val myPC = Computer()
    myPC.boot()

    println()
    println("[Factory Method Pattern]")
    val dog = AnimalFactory.createAnimal("dog")
    val cat = AnimalFactory.createAnimal("cat")
    println("Dog: ${dog?.speak()}")
    println("Cat: ${cat?.speak()}")

    println()
    println("[Method Chain Pattern]")
    val calc = Calculator()

    val result1 = calc.add(5.0).getResult()
    println("add(5.0): $result1")

    val result2 = calc.multiply(2.0).getResult()
    println("multiply(2.0): $result2")

    val result3 = calc.subtract(3.0).getResult()
    println("subtract(3.0): $result3")

    val result4 = calc.divide(2.0).getResult()
    println("divide(2.0): $result4")

    val finalResult = calc.getResult()
    println("result: $finalResult")


    println()
    println("[Builder Pattern]")
    val person = PersonBuilder()
        .withName("홍길동")
        .withAge(20)
        .withAddress("부산대학교 양산캠퍼스")
        .build()
    println(person)

}
