using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("[Adapter Pattern]");
        ExternalClass external = new ExternalClass();
        IInternal adapter = new Adapter(external);
        Console.WriteLine(adapter.Fetch());


        Console.WriteLine("\n[Decorator Pattern]");
        Coffee coffee = new BasicCoffee();
        Console.WriteLine("coffee.cost() = " + coffee.Cost()); // 5

        Coffee coffee_with_milk = new MilkDecorator(coffee);
        Console.WriteLine("coffee_with_milk.cost() = " + coffee_with_milk.Cost()); // 7

        Coffee coffee_with_sugar = new SugarDecorator(coffee);
        Console.WriteLine("coffee_with_sugar.cost() = " + coffee_with_sugar.Cost()); // 6

        Coffee coffee_with_milk_and_sugar = new SugarDecorator(coffee_with_milk);
        Console.WriteLine("coffee_with_milk_and_sugar.cost() = " + coffee_with_milk_and_sugar.Cost()); // 8


        Console.WriteLine("\n[Facade Pattern]");
        Computer computer = new Computer();
        computer.Boot();


        Console.WriteLine("\n[Factory Method Pattern]");
        Animal dog = AnimalFactory.CreateAnimal("dog");
        Animal cat = AnimalFactory.CreateAnimal("cat");
        Console.WriteLine($"Dog says: {dog?.Speak()}");
        Console.WriteLine($"Cat says: {cat?.Speak()}");


        Console.WriteLine("\n[Method Chain Pattern]");
        Calculator calc = new Calculator();

        calc.Add(10.0);
        Console.WriteLine("add(10.0) = " + calc.GetResult());

        calc.Subtract(2.0);
        Console.WriteLine("subtract(2.0) = " + calc.GetResult());

        calc.Multiply(3.0);
        Console.WriteLine("multiply(3.0) = " + calc.GetResult());

        calc.Divide(4.0);
        Console.WriteLine("divide(4.0) = " + calc.GetResult());

        Console.WriteLine("getResult() = " + calc.GetResult());

        Console.WriteLine("[Builder Pattern]");
        var person = new PersonBuilder()
            .WithName("홍길동")
            .WithAge(20)
            .WithAddress("부산대학교 양산캠퍼스")
            .Build();
        Console.WriteLine(person);
        Console.WriteLine();


    }
}
