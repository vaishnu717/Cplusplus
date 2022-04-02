#include <iostream>
using namespace std;

struct Employee{
    int id;
    char name[10];
    char department[20];
    double salary; 
}ep[10];

void get_details(){  
    for (int i = 1; i <= 4; i++){
        cout<<"Enter the Details of Employee "<<i<<endl;
        cout<<"Employee ID: "; 
        cin>>ep[i].id;
        cout<<"Name: ";
        cin>>ep[i].name;
        cout<<"Salary: ";
        cin>>ep[i].salary;
        cout<<"Department: ";
        cin>>ep[i].department;
        cout<<endl;
    }
}
void display(){
    cout<<"------- Details of the Employees -------"<<endl;

    for (int i = 1; i <= 4; i++){
        cout<<"Employee "<<i<<" Id "<<ep[i].id<<endl;
        cout<<"Employee "<<i<<" Name "<<ep[i].name<<endl;
        cout<<"Employee "<<i<<" Salary "<<ep[i].salary<<endl;
        cout<<"Employee "<<i<<" Department "<<ep[i].department<<endl;  
        cout<<endl;  
    }
}
void display(int id){
    bool employee_not_found = 0;
    for (int i = 1; i <= 4; i++){
        if (id == ep[i].id ){
        cout<<"Employee "<<i<<" Id "<<ep[i].id<<endl;
        cout<<"Employee "<<i<<" Name "<<ep[i].name<<endl;
        cout<<"Employee "<<i<<" Salary "<<ep[i].salary<<endl;
        cout<<"Employee "<<i<<" Department "<<ep[i].department<<endl;  
        cout<<endl;
        employee_not_found = 1;
        }
    }
    if (employee_not_found = 0)
    cout<<"Employee Id not Found "<<endl; 
}
void display(string name){
    bool employee_not_found = 0;
    for (int i = 1; i <= 4; i++){
        if (name == ep[i].name ){
        cout<<"Employee "<<i<<" Id "<<ep[i].id<<endl;
        cout<<"Employee "<<i<<" Name "<<ep[i].name<<endl;
        cout<<"Employee "<<i<<" Salary "<<ep[i].salary<<endl;
        cout<<"Employee "<<i<<" Department "<<ep[i].department<<endl;  
        cout<<endl;
        employee_not_found = 1;
        }
    }
    if (employee_not_found = 0)
    cout<<"Employee Id not Found "<<endl; 
}
int main(){
    get_details();
    display();
    int id;
    cout<<"Enter the Id of the Employee: ";
    cin>>id;
    display(id);
    cout<<"Enter the Name of the Employee: ";
    string name;
    cin>>name;
    display(name);
    return 0;
}


