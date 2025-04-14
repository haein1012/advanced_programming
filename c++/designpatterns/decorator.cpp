# include <iostream>
# include <string>

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
    

    int main() {
        Coffee* basic = new BasicCoffee(); // 기본 커피 5
        Coffee* withMilk = new MilkDecorator(basic); // +2 = 7
        Coffee* withMilkAndSugar = new SugarDecorator(withMilk); // +1 = 8
    
        cout << "총 가격: " << withMilkAndSugar->cost() << endl;
    
        // 메모리 해제
        delete withMilkAndSugar;
        delete withMilk; // 이건 실제로는 basic만 지워지면 되긴 함
        delete basic;
    
        return 0;
    }
    