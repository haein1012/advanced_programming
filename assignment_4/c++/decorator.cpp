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
    Coffee* coffee = new SugarDecorator(new MilkDecorator(new BasicCoffee()));
    cout << "[Decorator] 총 커피 가격: " << coffee->cost() << endl;
    delete coffee;
}
