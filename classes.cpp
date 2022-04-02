//CLASS IN C++ IN OOP
// WHAT IS OPBECT ORIENTED PROGRAMING? 
//--> TYPE OF PROGRAMIN STYLE WHERE THING REVOLVE AROUND OBJECT

// 3 TYPES OF ACCSES MODIFIERS
//--> 1 private  --> DEFAULT ACCSES MODIFIER  --> CAN ACCSES ONLY IN CLASS
//--> 2 public
//--> 3 protected


#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(string s,int a,int g){  //parameterised constructer
        name = s;
        age = a;
        gender = g;
    }
    student(student &a){
        cout<<"Copy Constructer"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
        // copy constructer
    }
    ~student(){
        cout<<"Destructer called";
    }
    
    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    student(string s,int a, int g){
        cout<<"Parametries Constructer"<<endl;
        name = s;
        age = a;
        gender = g;
        //parametries constructor
    }
       void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
        cout<<endl; 
    }
    // operator overloading 
    /* bool operator == (student &a){
        if (name=a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false; 
    } */

};
// class define kardi
class hero{
    private:   // can accses from anywhere
    int health;   // properties of class
    char level;

    private:  // can also be accsesd by get and set
    int energy;

    void print(){  // can accses private only in class
        cout<< energy << endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }
    
    void setlevel(char ch){
        level = ch;
    }
};

class vaishnavi{
// Empty class
};

int main(){
    //acessing public class object
    student a;
    a.name = 'Aaryan';
    a.age = 15;
    a.gender = 0;
    
    student arr[3];   //to take input from user in class
    for(int i=0; i<3; i++){
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3; i++){
        arr[i].printInfo();
    } 

   /* hero spiderman; //  creation of object
    cout<<"spiderman health is "<< spiderman.gethealth() << endl;
    spiderman.sethealth(70);
    //spiderman.level = 'A';

    cout<<"Size of object: "<< sizeof(spiderman) << endl;
    cout<<"Health is "<< spiderman.gethealth << endl;
    cout<<"Level is "<< spiderman.level << endl; */

    vaishnavi v1;
    cout<<"Size of empty class: "<< sizeof(v1) << endl;

    student a("vaishnavi" ,18,1);//will call default constructor
    a.printInfo();

    student b("Aaryan", 15,0);
    b.printInfo();

    student c;

    student c = a;//copy constructer

    /*
    if (c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    */

return 0;
}