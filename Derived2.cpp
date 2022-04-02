// DERIVED DATA TYPES
/* Function
   Array
   Pointer 
   Reference */

//1. FUCTION
#include <iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

int swap(int f, int u){
    int temp = f;
    f = u;
    u = temp;

}
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);

    int f = 4, u = 56;
    cout<<"The sum of 4 and 56 is "<<sum(f,u);


// FUCTION PROTOTYPES
// type fuction-name (arguments)
    int sum (int a, int b);


//2.POINTERS
    //What is an Pointer ---> Data type which holds  the address of other data types
    int ro=3;
    int *ha;  //stores address ha ---> becomes the pointer which holds the address of ro
    ha = &ro;
    *ha = 56;
    
    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&ro<<endl;
    cout<<"The address of a is "<<ha<<endl;

    // * ---> (to find value at) Dereference operator/at that pointer
    cout<<"The value at address b is "<<*ha<<endl;

    // Pointer to pointer
    // AS "ha" IS A POINTER NOW TO FIND THE ADDRESS OF THE POINTER WE USE ANOTHER PIONTER WHICH IS DENOTED BY int**
    int** c = &ha;
    cout<<"The address of b is "<<&ha<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl;  //address at ha
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;  //value at pointer
    
//3. ARRAY
    // What is an Array ---> collection of items of similar type stored in an continuos memory
    int marks[] = {23, 45, 56, 89};
    marks[2] = 455;  //to change value of array
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
       cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 

 return 0;
}
