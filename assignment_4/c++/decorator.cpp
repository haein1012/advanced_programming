#include <iostream>
using namespace std;

class Coffee {
public:
    virtual int cost() = 0;
    virtual ~Coffee() {}
};

class BasicCoffee : public Coffee {
public:
    int cost() override {
        return 5;
    }
};

class CoffeeDecorator : public Coffee {
protected:
    Coffee* coffee;
public:
    CoffeeDecorator(Coffee* c) : coffee(c) {}
};

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(Coffee* c) : CoffeeDecorator(c) {}
    int cost() override {
        return coffee->cost() + 2;
    }
};

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(Coffee* c) : CoffeeDecorator(c) {}
    int cost() override {
        return coffee->cost() + 1;
    }
};

void runDecorator() {
    cout << "[Decorator Pattern]" << endl;

    Coffee* coffee = new BasicCoffee();
    cout << "coffee = BasicCoffee()" << endl;
    cout << "coffee.cost() = " << coffee->cost() << endl << endl;

    Coffee* coffee_with_milk = new MilkDecorator(new BasicCoffee());
    cout << "coffee_with_milk = MilkDecorator(BasicCoffee())" << endl;
    cout << "coffee_with_milk.cost() = " << coffee_with_milk->cost() << endl << endl;

    Coffee* coffee_with_sugar = new SugarDecorator(new BasicCoffee());
    cout << "coffee_with_sugar = SugarDecorator(BasicCoffee())" << endl;
    cout << "coffee_with_sugar.cost() = " << coffee_with_sugar->cost() << endl << endl;

    Coffee* coffee_with_milk_and_sugar = new SugarDecorator(new MilkDecorator(new BasicCoffee()));
    cout << "coffee_with_milk_and_sugar = SugarDecorator(MilkDecorator(BasicCoffee()))" << endl;
    cout << "coffee_with_milk_and_sugar.cost() = " << coffee_with_milk_and_sugar->cost() << endl;

    delete coffee;
    delete coffee_with_milk;
    delete coffee_with_sugar;
    delete coffee_with_milk_and_sugar;
}
