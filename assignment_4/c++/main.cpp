#include <iostream>
#include <memory>
#include <string>
#include <Eigen/Dense>

#include "adapter.cpp"
#include "decorator.cpp"
#include "facade.cpp"
#include "factory.cpp"
#include "methodchain.cpp"

using namespace std;

int main() {
    cout << "Adapter\n";
    ExternalClass ext;
    Adapter adapter(&ext);
    cout << adapter.fetch() << endl;

    cout << "\nDecorator\n";
    Coffee* coffee = new SugarDecorator(new MilkDecorator(new BasicCoffee()));
    cout << "총 커피 가격: " << coffee->cost() << endl;
    delete coffee;

    cout << "\nFacade\n";
    Computer computer;
    computer.boot();

    cout << "\nFactory Method\n";
    auto dog = AnimalFactory::createAnimal("dog");
    auto cat = AnimalFactory::createAnimal("cat");
    cout << "Dog: " << dog->speak() << endl;
    cout << "Cat: " << cat->speak() << endl;

    cout << "\nMethod Chaining\n";
    Calculator calc;
    double result = calc.add(10).subtract(2).multiply(3).divide(4).getResult();
    cout << "계산 결과: " << result << endl;

    cout << "\nEigen Matrix\n";
    Eigen::Matrix<float, 3, 2> A;
    A << 1, 2,
         3, 4,
         5, 6;

    Eigen::Matrix<float, 2, 3> B;
    B << 7, 8, 9,
         10, 11, 12;

    Eigen::Matrix<float, 3, 3> C = A * B;
    cout << "A * B =\n" << C << endl;

    return 0;
}
