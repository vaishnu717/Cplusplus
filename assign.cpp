#include <iostream>
#include <fstream>
using namespace std;

int total;

class employee
{
public:
    int id;
    string name;
    string desig;
    string city;
} ep[20];

void get_details()
{
    for (int i = 1; i <= total; i++)
    {
        cout << "\nEnter the Details of Employee " << i << endl;
        cout << "Employee ID: ";
        cin >> ep[i].id;
        cout << "Name: ";
        cin >> ep[i].name;
        cout << "Designation: ";
        cin >> ep[i].desig;
        cout << "City: ";
        cin >> ep[i].city;
        cout << endl;
    }
}
void display()
{
    cout << "\n------- Details of the Employees -------" << endl;

    for (int i = 1; i <= total; i++)
    {
        cout << "Employee " << i << " Id " << ep[i].id << endl;
        cout << "Employee " << i << " Name " << ep[i].name << endl;
        cout << "Employee " << i << " Designation " << ep[i].desig << endl;
        cout << "Employee " << i << " City " << ep[i].city << endl;
        cout << endl;
    }
}

int main()
{
    cout << "\nHow many Employee details You wanna Enter: ";
    cin >> total;
    get_details();
    display();
    return 0;
}