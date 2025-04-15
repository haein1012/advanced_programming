using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== Adapter Pattern ===");
        ExternalClass external = new ExternalClass();
        IInternal adapter = new Adapter(external);
        Console.WriteLine(adapter.Fetch());

        Console.WriteLine("\n=== Decorator Pattern ===");
        Coffee basic = new BasicCoffee();
        Coffee milk = new MilkDecorator(basic);
        Coffee sugarMilk = new SugarDecorator(milk);
        Console.WriteLine($"총 커피 가격: {sugarMilk.Cost()}");

        Console.WriteLine("\n=== Facade Pattern ===");
        Computer computer = new Computer();
        computer.Boot();

        Console.WriteLine("\n=== Factory Method Pattern ===");
        Animal dog = AnimalFactory.CreateAnimal("dog");
        Animal cat = AnimalFactory.CreateAnimal("cat");
        Console.WriteLine($"Dog says: {dog?.Speak()}");
        Console.WriteLine($"Cat says: {cat?.Speak()}");

        Console.WriteLine("\n=== Method Chaining Pattern ===");
        Calculator calc = new Calculator();
        double result = calc.Add(10).Subtract(2).Multiply(3).Divide(4).GetResult();
        Console.WriteLine($"계산 결과: {result}");
    }
}
