// Encapsulation--> data hiding
// Wrapping of data members(properties/state) and fuction(methods/behavior)

// Fully Encapsulated class.
// all data members private

// Advantage
// data hiding.
// security accepts increases.
// code readiability.

class Student{
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    student first;
    cout<<"Okay"<<endl;

    return 0;
}