abstract class Coffee {
    public abstract int Cost();
}

class BasicCoffee : Coffee {
    public override int Cost() => 5;
}

abstract class CoffeeDecorator : Coffee {
    protected Coffee coffee;

    public CoffeeDecorator(Coffee coffee) {
        this.coffee = coffee;
    }
}

class MilkDecorator : CoffeeDecorator {
    public MilkDecorator(Coffee coffee) : base(coffee) {}

    public override int Cost() => coffee.Cost() + 2;
}

class SugarDecorator : CoffeeDecorator {
    public SugarDecorator(Coffee coffee) : base(coffee) {}

    public override int Cost() => coffee.Cost() + 1;
}
