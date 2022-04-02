#include <iostream>
using namespace std;

template <class T>
template <class A , class B , class C = char>
class Number{
    private:
    T num;
    public:
    A var1;
    B var2;
    C var3;

    public:
    Number(T a){
       num = a;
    }
    T getnum(){
        return num;
    }
};
int main(){
    Number <int> numberInt(7);
    Number <float> numberFloat(45.5);

    cout<<"Int Number = "<<numberInt.getnum()<<endl;
    cout<<"Int Number = "<<numberFloat.getnum()<<endl;

    return 0;
}