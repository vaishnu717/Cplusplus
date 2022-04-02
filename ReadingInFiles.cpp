#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    
    ifstream file("Hello.txt");
     //obj of ifstream Note: if file is not ther it cant open as we are reading in file and not writing
    
    vector <string> names; 

    string input;
    while (file >> input ){     
        names.push_back(input);
    }

    for ( string name : names){
        cout<<name <<endl;
    }

    string line;
    getline(file, line);
    cout<<line<<endl;



    

    return 0;
}