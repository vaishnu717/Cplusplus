#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> data = {1, 2,3};
    data.push_back(12);   //puts last element
    cout << data[data.size()-1] << endl;
    data.pop_back();      //removes last element
    cout << data[data.size()-1] << endl;
    cout<<data.front();
    cout<<data.back();
    return 0;
}