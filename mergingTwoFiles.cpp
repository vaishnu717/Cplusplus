#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream f1,f2;
    ofstream f3; 
    string str1,str2; 
    
    f1.open("file1.txt",ios::in);
    f2.open("file2.txt",ios::in);
    f3.open("file3.txt",ios::out);

    if (f1.fail() || f2.fail()){ 
        cout << "Error opening file.";
    }            
    else if (f3.fail()){
    cout << "file3 opening failed.";
    }

    while(getline(f1, str1)){ 
        f3<<str1; 
        f3<<endl;
    }
    while(getline(f2, str2)){ 
        f3<<str2;
        f3<<endl;
    }
    
    f1.close();
    f2.close();
    f3.close();
    
    return 0;
}