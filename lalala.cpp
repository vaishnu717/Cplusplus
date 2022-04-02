#include <iostream>
using namespace std;

class Calculator
{
public:
    int a;
    int b;

    Calculator Number(int n, int m)
    {
        a = n;
        b = m;
    }

    friend Calculator sum(Calculator o1, Calculator o2); // permission
    void printNumber()
    {
        cout << "The sum is " << a + b << endl;
    }
};

Calculator sum(Calculator o1, Calculator o2)
{
    Calculator o3;
    o3.Number(o1.a + o2.a , o1.b + o2.b);
    return o3;
}

int main()
{
    Calculator c1, c2, c3;
    c1.Number(1, 4);
    c1.printNumber();

    c2.Number(5, 8);
    c2.printNumber();

    c3 = sum(c1, c2);
    c3.printNumber();

    return 0;
}