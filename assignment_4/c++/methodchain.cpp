#include <iostream>
using namespace std;

class Calculator {
private:
    double result;

public:
    Calculator() : result(0) {}

    Calculator& add(double value) {
        result += value;
        return *this;
    }

    Calculator& subtract(double value) {
        result -= value;
        return *this;
    }

    Calculator& multiply(double value) {
        result *= value;
        return *this;
    }

    Calculator& divide(double value) {
        if (value != 0) result /= value;
        return *this;
    }

    double getResult() const {
        return result;
    }
};

void runMethodChain() {
    Calculator calc;

    cout << "[Method Chain Pattern]" << endl;
    calc.add(10);
    cout << "add(10): " << calc.getResult() << endl;

    calc.subtract(2);
    cout << "subtract(2): " << calc.getResult() << endl;

    calc.multiply(3);
    cout << "multiply(3): " << calc.getResult() << endl;

    calc.divide(4);
    cout << "divide(4): " << calc.getResult() << endl;

    cout << "최종 계산 결과: " << calc.getResult() << endl;
}