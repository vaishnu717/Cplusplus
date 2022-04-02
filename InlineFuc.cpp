//INLINE FUCTIONS , DEFAULT 
#include <iostream>
using namespace std;

inline int product(int a , int b){ //agar fucttion may na ke bara bara kaam ho raha hai to inline use karo
    return a*b;                    //
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b);

    return 0;
}