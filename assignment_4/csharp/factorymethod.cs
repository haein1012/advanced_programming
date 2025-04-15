using System;

abstract class Animal {
    public abstract string Speak();
}

class Dog : Animal {
    public override string Speak() => "Woof!";
}

class Cat : Animal {
    public override string Speak() => "Meow!";
}

class AnimalFactory {
    public static Animal? CreateAnimal(string type) {
        return type switch {
            "dog" => new Dog(),
            "cat" => new Cat(),
            _ => null
        };
    }
}
