interface Coffee {
    fun cost(): Int
}

class BasicCoffee : Coffee {
    override fun cost() = 5
}

abstract class CoffeeDecorator(private val coffee: Coffee) : Coffee {
    protected fun baseCost() = coffee.cost()
}

class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost() = baseCost() + 2
}

class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost() = baseCost() + 1
}
