#include <iostream>
using namespace std;

class area{
    public:
    float x;
    float y;
    virtual void show_area(){
        cout<<"Nothing is Defined"<<endl;
    }
};
class circle : public area {
    void show_area(){
        cout<<"\nCircle with radius: ";  
        cin>>x;  
        cout<<"Area of Circle = "<< 3.14 * x * x << endl; 
        cout<<endl;
    }
};
class triangle : public area {
    void show_area(){
        cout<<"\nBase of the Triangle: ";  
        cin>>x;
        cout <<"Height of the Triangle: ";
        cin>>y;
        cout<<"Area of Triangle = "<< 0.5 * x * y << endl; 
        cout<<endl;
    }
};
class rectengle : public area {
    void show_area(){
        cout<<"\nLength of the Triangle: ";  
        cin>>x;
        cout <<"Breadth of the Triangle: ";
        cin>>y;
        cout<<"Area of Rectangle = "<<x * y << endl; 
        cout<<endl;
    }
};

int main() {
    area *a;
    circle c;
    triangle t;
    rectengle r;

    a = &c;
    a->show_area();

    a = &t;
    a->show_area();

    a = &r;
    a->show_area();

    return 0;
}