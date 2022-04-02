#include <iostream>
using namespace std;

int main(){
    
    string str3;
    getline(cin, str3);

    for (int i = 0; i < str3.size(); i++)
    {
       if (i==0){
          str3[i] = toupper(str3[i]);
       }
       else if (str3[i-1]==' '){
           str3[i] = toupper(str3[i]);
       }
    }

    cout<<str3;
    
     
    
    return 0;
}