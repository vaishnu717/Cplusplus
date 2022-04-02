#include <iostream>
using namespace std;

template <class T>
class Calculator{
    private:
    T x;
    T y;

    public:
    Calculator(T a , T b){
        x = a;
        y = b;
    }
    
    T add(T a, T b){
        return a + b;
    }

    T multiply(T a , T b){
        return a*b;
    }
    
    T subtract(T a, T b){
        return a-b;
    }
    T divide(T a , T b){
        cout<<a/b;
    }
};

int main(){
    Calculator<int> h(3,8);
    cout<<h.add(6,6);

    return 0;
}