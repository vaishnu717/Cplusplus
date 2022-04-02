#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string content;
    ifstream file("file1.txt");

    while (getline(file, content))
    {
        cout<<content<<endl;
    }

    file.close();
    
    return 0;
}