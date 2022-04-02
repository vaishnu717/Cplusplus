#include<iostream>
using namespace std;
int main(){
    char name;
    int units;
    cout<<"ELECTRICITY BILL"<<endl;
    cout<<"Enter the number of units consumed:"<<endl; 
    cin>>units;
    cout<<"Enter your name:"<<endl;
    cin>>name;

    if (units<=100){
        float bill = 25 +0.75*(units);
        cout<<"The bill of user will be: "<<bill<<endl;
    }
    else if(100<units<=200){
         float bill = 25 + 1*(units);
        cout<<"The bill of user will be: "<<bill<<endl;
    }
    else if(200<units<=300){
          float bill = 25 +1.25*(units);
        cout<<"The bill of user will be: "<<bill<<endl;
          if ( bill >= 350)
    {
       cout<< ( 11*bill)/10<<endl;
    }
    }
    int pri;
    char name;
    cout<<"bank bill";
    cout<<"enter your amount";
    cin>>pri;
    cout<<"enter your name";
    cin>>name;
    //Simple Interest = Principal * Interest Rate * Time Period
    if(100<=pri<5000){
        float bill = pri*0.1*3;
        cout<<bill+pri;
    }
    else if(5000<=pri<=10000){
        float bill = pri*0.22*3;
        cout<<bill+pri;
    }
    else if(pri>10000){
        float bill = pri*0.35*3;
        cout<<bill+pri;
    }

    return 0;
}