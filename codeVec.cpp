#include <iostream>
#include <vector>
using namespace std;

template <class T>
void Vector(vector <T> &vec2){
    for (int i = 0; i < vec2.size(); i++){
        cout<<vec2[i]<<" ";
        cout<<vec2.at(i)<<" "; //using at function
    }
    cout<<endl;
}

int main(){

    vector <int> vec; //vertor declaration
    vector <char> vec3(4);
    vector <char> vec(vec2);
    vector <float> v(6, 3);
    vector <int> data = {1, 2,3};

    int element , size;
    cout<<"Enter a vector size: ";
    cin>>size;

    // for (int i = 0; i < size; i++){
    //    // cout<<"Enter Element in the Vector: ";
    //    // cin>>element;
    //    // vec.push_back(element);  //push back to add element in vector
    // }
    Vector(vec);
    // //vector type scope resolution op iterator declaration =  to begin iterating
    // vector <int> :: iterator iter = vec.begin();
    // vec.insert(iter, 3 , 400);
    // //vec.pop_back();   //to remove end element
    Vector(vec);
    return 0;
}