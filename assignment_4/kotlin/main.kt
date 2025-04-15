fun main() {
    println("[Adapter]")
    val adapter = Adapter(ExternalClass())
    println(adapter.fetch())

    println("[Decorator]")
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

    println("[Facade]")
    val myPC = Computer()
    myPC.boot()

    println("[Factory]")
    val dog = AnimalFactory.createAnimal("dog")
    val cat = AnimalFactory.createAnimal("cat")
    println("Dog: ${dog?.speak()}")
    println("Cat: ${cat?.speak()}")

    println("[Method Chaining]")
    val calc1 = Calculator()
    val result1 = calc1.add(5.0).getResult()
    println("add(5.0): $result1")

    val calc2 = Calculator()
    val result2 = calc2.multiply(2.0).getResult()
    println("multiply(2.0): $result2")

    val calc3 = Calculator()
    val result3 = calc3.subtract(3.0).getResult()
    println("subtract(3.0): $result3")

    val calc4 = Calculator()
    val result4 = calc4.divide(2.0).getResult()
    println("divide(2.0): $result4")

    val calc = Calculator()
    val finalResult = calc.add(5.0).multiply(2.0).subtract(3.0).divide(2.0).getResult()
    println("result: $finalResult")

    println("[Builder]")
    val person = PersonBuilder()
        .withName("홍길동")
        .withAge(20)
        .withAddress("부산대학교 양산캠퍼스")
        .build()
    println(person)

}
