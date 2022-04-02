#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    friend Complex sum(Complex o1, Complex o2); //permission
    void printNumber(){
        cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex sum(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main(){
    Complex c1 , c2 , c3;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    c3 = sum(c1 , c2);
    c3.printNumber();

    return 0;
}

/* Properties of friend function

1. Fuction should not be in the scope of class
2. since it is not in the scope of the class it cannot be called from the eobject of the class
c1.sumcomplex == Invalid
3. Usually contains objects as arguments
4. Can be declared inside the public and Private Fuction of the class

*/