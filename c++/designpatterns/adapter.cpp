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

int main() {
    ExternalClass* legacyAPI = new ExternalClass();
    Adapter adapter(legacyAPI);

    cout << adapter.fetch() << endl;  

    delete legacyAPI; 
    return 0;
}
