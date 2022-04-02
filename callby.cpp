// CALL BY FUNCTION
#include <iostream>
using namespace std;

// CALL BY VALUE SNAP FUCTION
void swap(int a, int b)   //temp a b
{   int temp = a;         //4   4  5   
    a = b;                //4   5  5
    b = temp;             //4   5  4 
}

// CALL BY POINTER
void swapPointer(int* a, int* b) //temp a b
{
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}
// CALL BY REFERENCE //may kay hota hai ki formal parameter get converted into actual parameters 
void swapReferenceVar(int &a, int &b)  //formal parameters
{    
    int temp = a;         //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); //actual parameters
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    return 0;
}