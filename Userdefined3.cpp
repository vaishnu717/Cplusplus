
#include<iostream>
using namespace std;

//3.USER DEFINED FUCTIONS
/* Class
   Structure
   Union
   Enumeration */

//1. STRUCTURE
// What is structure? ---> it is a user defined data type is used combine items of different type

typedef struct employee // important to write before shortcut --->used to change the name
{
   int id;
   char favchar;
   float salary;
} ep;   // short cut for struct employee
// if we can store everthing in an structure then why we use classes?
// everthing is not possible in structure for example:- 
// LIMITATION:
//1.data hiding
//2.security

//2. UNION
// What is a union? ---> We can only use 1 variable at a time otherwise the compiler will give us a garbage value
// The compiler chooses the data type which has maximum memory for the allocation.

typedef union money 
{
    int rice;
    char car;
    float pounds;   // 
} va;

int main(){
    
    //3. ENUMERATION
    enum Meal{ breakfast, lunch, dinner};   //list 
    //Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
    Meal m2 = lunch;
    cout<<"m2 "<<m2<<endl;

    va m1;  //object formation           //UNION
    m1.rice = 34;
    m1.pounds = 56;                     
    cout<<"rice "<<m1.rice<<endl;       //garbage value
    cout<<"Pounds "<<m1.pounds<<endl;   //only pounds value will be printed as it has maximum meomory allocation.

    ep vaishnavi;
    vaishnavi.id = 1;
    vaishnavi.favchar = 'C';
    vaishnavi.salary = 12000000;
    cout<<"The value is "<<vaishnavi.id<<endl;
    cout<<"The value is "<<vaishnavi.favchar<<endl;
    cout<<"The value is "<<vaishnavi.salary<<endl;


    return 0;
}