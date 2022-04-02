#include <iostream>
using namespace std;

class person {
private:
    string name;
    int age;
public:
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    void take(){
        cout << "\nEnter Student Name: ";
        cin >> name;
        cout << "Enter Student Age: ";
        cin >> age;
    }
};
class student : public person {
private:
    int rollno;
public:
    int getroll(){
        return rollno;
    }
    void take(){
        cout << "Enter Student Rollno: ";
        cin >> rollno;
    }
    void display(){
        cout << "\n------Student Details------" << endl;
        cout << "\nStudent Name: " <<getname() << endl;
        cout << "Student Age: " << getage() << endl;
        cout << "Student Roll No: " << getroll() << endl;
        cout << endl;
    }
};
int main(){
    student s1;
    s1.person::take();
    s1.student::take();
    s1.display();

    return 0;
}