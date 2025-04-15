#include <iostream>
using namespace std;

// 각각 cpp 파일이 있는 경우 include하거나 compile 시 함께 묶음
void runAdapter();
void runDecorator();
void runEigen();
void runFacade();
void runFactory();
void runMethodChain();

int main() {
    runAdapter();
    runDecorator();
    runEigen();
    runFacade();
    runFactory();
    runMethodChain();
    return 0;
}
