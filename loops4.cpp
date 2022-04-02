// Loop Question Program in C++
#include<iostream>
#include<cmath>
using namespace std;
int main(){
// Program to print natural numbers till n
 int n,i;
 cout<<"Enter a number\n";
 cin>>n;
 for (i=1;i<=n;i++){
    cout<<i;
    cout<<endl;
 }
 // Program to print natural numbers in reverse
 int k,start;
 cout<<"Enter a value";
 cin>>start;
 for(k=start ; k>=1; k--){
    cout<<k;
    cout<<endl;
 }
 // Program to write abcd from A to Z
char ch;
for(ch='a';ch<='z'; ch++){
    cout<<ch<<" ";
}
// Program to add numbers
int s, num9,sum;
sum = 0;
cout<<"Enter a number";
cin>>num9;
for(s=1;s<=num9;s++){
    sum = sum + s;
    cout<<sum;
    cout<<endl;
} 
// Program to print table
int l,num1;
cout<<"Enter a number";
cin>>num1;
for(l=1;l<=10; l++){
    cout<<num1<<" * "<<l<<" = "<<l*num1<<endl;
}
// Program to add even numbers
int x,y,e;
cout<<"Enter your number";
cin>>x;
e = 0;
for(y=2;y<=x;y+=2){
    e = e+y;
    cout<<e;
    cout<<endl;
} 
// Program to print prime and non prime numbers
int f;
cout<<"Enter your number";
cin>>f;
if (f%2==0 || f%3==0){
    cout<<"Prime";
}
else{
    cout<<"Non Prime";
    cout<<endl;
} 
// Program to print cube of numbers
int u, w,mum;
cout<<"enter a number";
cin>>w;

for(u=1;u<=w;u++){
    mum = u * u * u;
    cout << "Number is : " << u << " and the cube of " << u << " is: " << mum << endl;
}
// Program to print square of numbers
int r,h,g;
cout<<"Enter a number";
cin>>h;
for(r=1;r<=h;r++){
    g = r*r;
    cout << "Number is : " << r << " and the square of " << r << " is: " << g << endl;
}
int num;
        cout<<"Enter a number";
        cin>>num;
        switch (num > 0){
            case 1:
            cout<<"it is an positive number";
            break;

            case 0:
            switch(num < 0)
            {
            case 1:
            cout<<"It is negative";
                break;
            case 0:
            cout<<"it is an zero";
                break;
            }
            break;
        } 

int aar;
cin>>aar;

bool flag=0;

for(int i=2; i<=sqrt(n); i++){
    if(n%i==0){
        cout<<"Non Prime"<<endl;
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<"prime"<<endl;
}

int vai;
cin>>vai;

int reverse;

return 0;
}

