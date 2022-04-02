#include <iostream>
using namespace std;

int total;

class employee
{
public:
    int id;
    string name;
    string desig;
    int salary;
    friend class tax;
} ep[20];

class tax {
    public:
    float taxes[4][2];
    tax();
};

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
        cout << "Salary: ";
        cin >> ep[i].salary;
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
        cout << "Employee " << i << " City " << ep[i].salary << endl;
        cout << endl;
    }
}

void Tax(){
    float taxes[4][2] ={ {250000,0.05} ,{500000 , 0.10}, {1000000,0.15} , {1000000,0.20}};
        int ta;
        for (int i = 1; i <= total; i++)
        {
            int salary = ep[i].salary;
            int sal = (12 * salary);
            if(sal < taxes[0][0]){
                ta = sal * taxes[0][1];
                cout<<"The Tax to be paid by the Employee "<< i <<" on the Annual Salary "<< sal <<" is "<<ta<<endl;
            }
            else if (taxes[0][0] <= sal < taxes[1][0] ){
                ta = sal * taxes[1][1];
                cout<<"The Tax to be paid by the Employee "<< i <<" on the Annual Salary "<< sal <<" is "<<ta<<endl;
            }
            else if (taxes[1][0] <= sal < taxes[2][0] ){
                ta = sal * taxes[2][1];
                cout<<"The Tax to be paid by the Employee "<< i <<" on the Annual Salary "<< sal <<" is "<<ta<<endl;
            }
            else if (taxes[3][0] <= sal){
                ta = sal * taxes[3][1];
                cout<<"The Tax to be paid by the Employee "<< i <<" on the Annual Salary "<< sal <<" is "<<ta<<endl;
            }

        }
        
    }

int main()
{
    cout << "\nHow many Employee details You wanna Enter: ";
    cin >> total;
    get_details();
    display();
    Tax();
    return 0;
}