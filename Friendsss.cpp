#include <iostream>
using namespace std;

class hero{
    public:
    string name;
    int power;
    char level;
    private:
    int health;

    public: 
    void setHealth(int h){
        health = h; 
    }

//Default constructor
hero(){
    cout<<"Default constructor"<<endl;
}

//Parameteriesd Constructor
hero(string n,int h, int p , char l){
    cout<<"Parameteriesd Constructor"<<endl;
    name = n;
    power = p;
    level = l; 
    health = h;
}

//Copy Constructor
hero(hero &thor){
    cout<<"Copy Constructor"<<endl;
    name = thor.name;
    power = thor.power;
    level = thor.level;
    health = thor.health;
}
//Destructer
~hero(){
    cout<<"Destructer called"<<endl;
    }

public: void printInfo(){
    cout<<"Name = ";
    cout<<name<<endl;
    cout<<"Power = ";
    cout<<power<<endl;
    cout<<"Health = ";
    cout<<health<<endl;
    cout<<"Level = ";
    cout<<level<<endl;
    cout<<endl; 
    }

};

int main(){
    hero thor;
    thor.name = "Thor";
    thor.power = 85;
    thor.level = 'A';
    thor.setHealth(90);
    thor.printInfo();


    hero loki;
    loki = thor;
    loki.printInfo();

    return 0;
}

