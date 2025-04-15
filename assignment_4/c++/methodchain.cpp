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
    double result = calc.add(10).subtract(2).multiply(3).divide(4).getResult();
    cout << "[Method Chaining] 계산 결과: " << result << endl;
}
