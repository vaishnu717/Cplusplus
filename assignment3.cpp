#include<iostream>
using namespace std;

//When a function calls itself it is called recursion and 
//the function which is calling itself is called a recursive function.

int factorial(int n){
      if(n<=1)
      return 1;
      else
      return n* factorial(n-1);
  }

int sum(int num){
    if (num != 0)
    return (num%10+sum (num/10));

void swapValue(int a,int b){
  int c = a;
      a = b;
      b = c;
}

void swapRefrence(int &a, int &b){
    int c = a;
        a = b;
        b = c;
}

int main(){
    int x =4, y=5;
    cout<<"Swap with call by value "<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapValue(x, y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);

    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    cout<<"Sum of the Digits is = "<<sum(num);

if(n<=1)
      return 1;
      else
      return n* factorial(n-1);
  }

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}