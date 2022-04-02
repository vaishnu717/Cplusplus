//Oops 
// single inheriatance
// multi inheritance
// multi level inheritance
//hybrid inheritance
#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->wight = w;
    }
};

class Male: public human{
    public:
    string color;

    void sleep(){
        cout<<"Sleep"<<endl;
    }
}

int main(){
    Male obj;
    cout<<obj.age<<endl;
    cout<<obj.weight<<endl;
}
