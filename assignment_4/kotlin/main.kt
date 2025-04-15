fun main() {
    println("[Adapter]")
    val adapter = Adapter(ExternalClass())
    println(adapter.fetch())

    println("[Decorator]")
    val coffee = SugarDecorator(MilkDecorator(BasicCoffee()))
    println("총 커피 가격: ${coffee.cost()}")

    println("[Facade]")
    val myPC = Computer()
    myPC.boot()

    println("[Factory]")
    val dog = AnimalFactory.createAnimal("dog")
    val cat = AnimalFactory.createAnimal("cat")
    println("Dog: ${dog?.speak()}")
    println("Cat: ${cat?.speak()}")

    println("[Method Chaining]")
    val calc = Calculator()
    val result = calc.add(10.0).subtract(3.0).multiply(2.0).divide(7.0).getResult()
    println("계산 결과: $result")
}
