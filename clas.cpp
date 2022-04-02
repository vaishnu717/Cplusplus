#include <iostream>
using namespace std;

class Employee
{
    private:
    int a, b, c;

    public:
    int d, e;

    void setdata(int a1,int b1,int c1); //Decleration
    void getdata(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<b<<endl;
    cout<<"The value of a is "<<c<<endl;
    cout<<"The value of a is "<<d<<endl;
    cout<<"The value of a is "<<e<<endl;
    }
    

};

void Employee :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    harry.setdata(1,2,4);
    harry.d = 34;
    harry.e = 89;
    harry.getdata();
    return 0;
}