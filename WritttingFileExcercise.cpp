#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string name;
    int reg, batch;
    string branch;

    ofstream file("file2.txt");

    cout<<"Name: ";
    cin>>name;
    file<<"Name: "<<name<<endl;

    cout<<"Registration No: ";
    cin>>reg;
    file<<"Registration No: "<<reg<<endl;

    cout<<"Batch: ";
    cin>>batch;
    file<<"Batch: "<<batch<<endl;
  
    cout<<"Branch: ";
    cin>>branch;
    file<<"Branch: "<<branch<<endl;

    file.close();
    
    return 0;
}