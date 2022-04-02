#include <iostream>
#include <fstream>
using namespace std;

//FILE HANDLING
// 3 usesfull classes
// 1. fstream
// 2. ifstream  --> derived from fstream
// 3  ofstream  --> derived from fstream

// 2 ways to open file 
// 1. using a constructor
// 2. using a member function open() of th class

int main(){
    string s = "Aaryan is a good boy";
    //opening files using constructor
    // ofstream out("sample.txt");  //write operation
    // out<<s;

    // ifstream in("sample.txt"); //read operation
    // getline(in, s);
    // cout<<s;

    //this is how you make a file
    // ofstream out;
    // out.open("sample1.txt");
    // cout<<"Enter your name";
    // string name;
    // getline(cin, name);
    // cin>>name;
    // out<<name;
    // out.close();

    ifstream in("sample1.txt");
    string content;
    cout<<"Enter something: ";
    cin>>content;
    //in>>content;
    cout<<"The content of the file is "<<content;

    return 0;
}