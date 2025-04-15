#include <string>
#include <iostream>
using namespace std;

class ExternalClass {
public:
    string search() {
        return "get user info";
    }
};

class Adapter {
    ExternalClass* external;
public:
    Adapter(ExternalClass* ext) : external(ext) {}
    string fetch() {
        return external->search();
    }
};

void runAdapter() {
    ExternalClass ext;
    Adapter adapter(&ext);
    cout << "[Adapter] " << adapter.fetch() << endl;
}
