#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    //to ask user for file name
    // string filename;
    // cout << "Enter file Name: ";
    // cin>>filename;

    //ofstream file(filename);
    ofstream file("Hello.txt");   //class of stream obj //file name and open
    //ofstream file("Hello.txt", ios::app); //instead of over writing it will add
    
    if(file.is_open()){
        cout <<"Success File is open"<<endl;
    }

    file<<"Hey"<<endl;  //instead of cout we use file name to write into file
    
    vector <string> names;
    names.push_back("vaishnu");
    names.push_back("Aaryan");
    names.push_back("Rohan");
    names.push_back("Sania");

    for (string name : names){
        file << name << endl;
    }

    file.close();

    return 0;
}