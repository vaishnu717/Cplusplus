#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"\nEnter a number to find out whether it's ODD or EVEN "<<endl;
    cin>>num;
    
    if(num%2==0){
        cout<<num<<" is an EVEN number"<<endl;
    }
    else{
        cout<<num<<" is an ODD number"<<endl;
    }cout<<endl;
    
    int a,b,c;
    cout<<"Enter 3 numbers "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
        cout<<"A is maximum"<<endl;
        }
        else{
        cout<<"C is maximum"<<endl;
        }
    }
    else{
        if(b>c){
        cout<<"B is maximum"<<endl;
        }
        else{
        cout<<"C is maximum"<<endl;
        }
    }cout<<endl;   
    
        char ch;
        cout<<"Enter a character "<<endl;
        cin>>ch;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' 
        || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')
        {
        cout<<"It is an VOWEL"<<endl;
        }
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"It is an CONSONANT"<<endl;
        }
        else if(ch>='0' && ch<='9'){
        cout<<"It is an INTEGER"<<endl;
        }
        else{
        cout<<"It is an SPECIAL CHARACTER"<<endl;
        }cout<<endl;
        
    
        int chem,phy,math,comp,eng;
        float per ;
        cout<<"Enter the marks of chemistry, physics, math, computer, english"<<endl;
        cin>>chem>>phy>>math>>comp>>eng;
        per = (chem+phy+math+comp+eng)/5;
        cout<<per<<endl;
        switch (per>=90&&per<100)
        {
 	    case 1:
 		cout<<"Grade is A"<<endl;
 	    break;
 	    case 0:
 	    switch(per>=80 &&per<90)
 	    {
 	    case 1:
 	    cout<<"Grade is B"<<endl;
 	    break;
 	    case 0:
 	    switch(per>=70&&per<80)
	    {
	    case 1:
	    cout<<"Grade is C"<<endl;
	    break;
	    case 0:
	    switch (per>=60&&per<70)
        {
        case 1:
        cout<<"Grade is D"<<endl;
        break;
        case 0:
        switch (per>=50&&per<60)
        {
        case 1:
        cout<<"Grade is E"<<endl;
        break;
        case 0:
        cout<<"Fail"<<endl;
        break;
	    }
        break;
        }
	    break;
	    }
 	    break;
	    }
 	    break;
        }cout<<endl;

        int n1,n2;
        char op;
        cout<<"\nEnter 2 numbers:"<<endl;
        cin>>n1>>n2;
        cout<<"Enter operator(+,-,/,*): "<<endl;
        cin>>op;
        switch (op)
        {
        case '+':
        cout<<"The sum is "<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"Operator not found!"<<endl;
        break;
        }

return 0;
}
    