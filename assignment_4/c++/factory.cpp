#include <iostream>
#include <memory>
using namespace std;

class Animal {
public:
    virtual string speak() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    string speak() override { return "멍멍!"; }
};

class Cat : public Animal {
public:
    string speak() override { return "야옹!"; }
};

class AnimalFactory {
public:
    static unique_ptr<Animal> createAnimal(const string& type) {
        if (type == "dog") return make_unique<Dog>();
        else if (type == "cat") return make_unique<Cat>();
        else return nullptr;
    }
};

void runFactory() {
    auto dog = AnimalFactory::createAnimal("dog");
    auto cat = AnimalFactory::createAnimal("cat");
    cout << "[Factory] Dog: " << dog->speak() << endl;
    cout << "[Factory] Cat: " << cat->speak() << endl;
}
