// if and else questions
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter 3 numbers";
    cin>>x>>y>>z;
    if((x>y) && (x>z)){
    cout<<"x is greater";
    } 
    else if ((y>x) && (y>z)){
    cout<<"y is greater";
    }
    else{
        cout<<"z is greater";
    }

    int num;
    cout<<"enter a year";
    cin>>num;
    if((num%4==0) && (num%100 !=0) || (num%400 ==0)){
    cout<<"it is an leap year";
    }
    else{
        cout<<"it is not a leap year";
    }
    char alp;
    cout<<"enter random";
    cin>>alp;
    if((alp>='a' && alp<='z')  || (alp>='A' && alp<='Z')){
        cout<<"it is an alphabet";
    }
    else{
        cout<<"its not a alphabet";
    }
    char ch;
    cout<<"enter a character";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"it is an lowwercase alphabet";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"it is an uppercase alphabet";
    }
    else{
        cout<<"it is an invaild input";
    }
    int p,q ,r;
    cout<<"enter 3 sides of a triangle";
    cin>>p>>q>>r;
    if((p==q) && (q==r)){
        cout<<"it is an equilateral triangle";
    }
    else if((p==q) || (q==r) || (r==p)){
        cout<<"it is an isoceles triangle";
    }
    else{
        cout<<"its an scalene triangle";
    }

    int phy, chem, bio, math, comp;
    cout<<"enter the marks of each subject phy, chem, bio, math, comp";
    cin>>phy>>chem>>bio>>math>>comp;
    float per;
    per = (phy + chem + bio + math + comp) / 5.0;

    if(per>=90){
        cout<<"A grade";
    }
    else if(per>=80){
        cout<<"B grade";
    }
    else if(per>=70){
        cout<<"C grade";
    }    
    else if(per>=60){
        cout<<"D grade";
    }
    else if(per>=50){
        cout<<"E grade";
    }
    else{
        cout<<"F you need to work a little bit harder";
    }       
    return 0;
}