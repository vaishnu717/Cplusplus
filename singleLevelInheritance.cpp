#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;
};
class student : public person {
public:
    int rollno;
    void get(){
        cout << "\nEnter Student Name: ";
        cin >> name;
        cout << "Enter Student Age: ";
        cin >> age;
        cout << "Enter Student Rollno: ";
        cin >> rollno;
    }
    void display(){
        cout << "\n------Student Details------" << endl;
        cout << "\nStudent Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Roll No: " << rollno << endl;
    }
};
int main(){
    student s1;
    s1.get();
    s1.display();

    return 0;
}