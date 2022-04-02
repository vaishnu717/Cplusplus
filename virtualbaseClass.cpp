#include <iostream>
using namespace std;

class student {
public:
    string name;
    int age;
};
class test : virtual public student {
public:
    int marks1 , marks2 , marks3;
};
class sport : virtual public student {
public:
    int score;
};
class result : public test , sport{
public:
    void get(){
        cout << "\nEnter Student Name: ";
        cin >> name;
        cout << "Enter Student Age: ";
        cin >> age;
        cout<<"Enter the Marks For Sub 1: ";
        cin>> marks1;
        cout<<"Enter the Marks For Sub 2: ";
        cin>> marks2;
        cout<<"Enter the Marks For Sub 3: ";
        cin>> marks3;
        cout<<"Enter Sport Score: ";
        cin>>score;
    }

    void display(){
        int res = marks1 + marks2 + marks3 + score;
        cout << "\n------Student Result------" << endl;
        cout << "\nStudent Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout<< "The Total Msarks of "<<name<<" is "<<res<<endl;
        cout<<endl;
    }
};
int main(){
    result s1;
    s1.get();
    s1.display();

    return 0;
}