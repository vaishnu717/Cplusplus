// BASIC PRACTICE OF ALL C++ PROGRAMS

//----> STARTING UP WITH 

//----------------------- BASICS INPUT AND OUTPUT----------------------

#include<iostream>
#include<cmath>
using namespace std;

int sum(int a, int b){
  int c = a + b;
  return c;
}

void swapValue(int a9,int b9){
  int c9 = a9;
      a9 = b9;
      b9 = c9;
}
void swapRefrence(int &a9, int &b9){
    int c9 = a9;
        a9 = b9;
        b9 = c9;
}

//1) Write a Program to print "Hello, World!"
int main(){
    cout<<"Hello World!!"<<endl;

//2) Write a Program to Print Integer Number Entered by User
int a;
cin>>a;
cout<<a<<endl;

//3) Write a Program to Add Two Integer Numbers Entered by the user
int b;
int c;
cin>>b>>c;
cout<<b+c<<endl;

/* 4) Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.) */
int divident,divisor,quocient,remainder;
cin>>divident>>divisor;
quocient = divident/divisor;
remainder = divident%divisor;

cout<<quocient<<"\n"<<remainder;

//5) Write a Program to Find Size of int, float, double and char in your computer
int d;
float e;
double f;
char g;
cin>>d>>e>>f>>g;
cout<<sizeof(d)<<endl;
cout<<sizeof(e)<<endl;
cout<<sizeof(f)<<endl;
cout<<sizeof(g)<<endl;

//6) Write a Program to Swap Two Numbers
int h,i;
cin>>h>>i;
h=i+h;
i=i-h;
cout<<h<<endl;
cout<<i<<endl;

//7) Write a Program to Find ASCII Value of a Character
char j;
cin>>j;
cout<<"ASCII value of "<<j<<int(j)<<endl;

//8) Write a Program to Multiply two decimal Numbers entered by User

float k,l;
cin>>k>>l;
cout<<"product"<<k*l<<endl;

//------------------------------------IF ELSE---------------------------------------
// IF AND ELSE
//1) Write a Program to Check Whether Number is Even or Odd
int m;
cin>>m;
if(m%2==0){
    cout<<"Even"<<endl;
}
else{
    cout<<"Odd";
}

//2) Write a Program to Check Whether a Character is Vowel or Consonant.
 char n;
 cin>>n;
 if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
    cout<<"vowel";
 }
 else if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
    cout<<"VOWEL";
 }
 else{
    cout<<"It is a consonant";
 }

//3) Write a Program to Find Largest Number Among Three Numbers entered by users

int n1,n2,n3;
cin>>n1>>n2>>n3;
if(n1>=n3 && n1>=n2){
    cout<<n1<<"  is greater";
}
else if(n2>=n1 && n2>=n3){
    cout<<n2<<"  is greater";
}
else{
    cout<<n3<<"  is greater";
}

//4) Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots both real and complex roots depending upon the
// discriminant).

float a1,b1,c1,r1,r2,determinant,realpart,imaginary;
cin>>a1>>b1>>c1;
determinant = b1*b1 - 4*a1*c1;

if (determinant>0){
    r1 = (-b1 + sqrt(determinant))/(2*a1);
    r2 = (-b1 - sqrt(determinant))/(2*a1);
    cout<<"x1 = "<<r1<<endl;
    cout<<"x2 = "<<r2<<endl;
}
else if(determinant==0){
    cout<<"Roots are real and same "<<endl;
    r1 = -b1/(2*a);
    cout<<"x1 = x2 "<<r1<<endl;
}
else{
    realpart = -b/(2*a);
    imaginary = sqrt(-determinant)/(2*a);
    cout<<"Roots are complex and different "<<endl;
    cout<<"x1 = "<<realpart<<"+"<<imaginary<<"i"<<endl;
    cout<<"x1 = "<<realpart<<"-"<<imaginary<<"i"<<endl;
}

//5) Write a Program to Check whether a year entered by user is Leap Year or not
// leap year which is evenly divisible by 4  but not evenly divisible by 100
// completely divisible by 400

int year;
cin>>year;
cout<<"Enter a year";
if(year%4==0 && year%100!=0 || year%400==0){
  cout<<"it is a leap year"<<endl;
}
else{
     cout<<"it is not a leap year"<<endl;
}

//----------------LOOPS--------------------------

//1) Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
// logic n=5 1+2+3+4+5=15  

int n5;
cin>>n5; 
for(int i1=1;i1<=n5;i1++){
    int sum = 0;
    sum = sum + i1;
    cout<<sum;
}   

//2) Write a Program to Find Factorial of a given number N
// what is factorial if n=5 5*4*3*2*1 = ---
int n7;
cin>>n7;
 int fact = 1,i;
   for(i=1; i<=n7; i++)
   fact = fact * i;
   cout<<"Factorial of "<<n7<<" is "<<fact;


//3) Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
// table = 6  6*1=6
int table;
cin>>table;
for(int i8=0;i8<=10;i8++){
    cout<<table<<" * "<<i8<<" = "<<table*i8<<endl;
}

//4) Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

int range,t1,t2,next;
cin>>range;
next = 0;
t1 = 0;
t2 = 1;
cout<<t1<<" "<<t2<<" ";

for(int i=2;i<=range;i++){
    next = t1+t2;
    cout<<next<<" ";
    t1 = t2;
    t2 = next;
} 
// program to add number by a function

  int num1,num2,su;
  cout<<"Enter your First Number "<<endl;
  cin>>num1;
  cout<<"Enter your Second Number "<<endl;
  cin>>num2;
  cout<<"The sum of the Numbers "<<num1<<" and "<<num2<<" is "<<sum(num1,num2);

// Program to swap number by call by value and reference
{
    int x =211051052, y=717;
    cout<<"Swap with call by Value "<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapValue(x, y); 
    cout<<"After Swap"<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    cout<<"\nSwap with call by Refrence "<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapRefrence(x, y); 
    cout<<"After Swap"<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 

    //6) Write a Program to Find GCD or HCF of two numbers entered by user 
    int n8,m9, gcd;
    cout<<"Enter two Numbers"<<endl;
    cin>>n8>>m9;
    for (int i5 = 2;i<n8 && m9;i++){
        if(n8%i5==0 && m9%i5==0){
            cout<<i;
            gcd = i5;
        }
        
    }
    cout<<"gcd = "<<gcd;



    return 0;
}



