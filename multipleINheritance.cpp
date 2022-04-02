#include <iostream>
using namespace std;

class Father {
public:
    string F_name;
    int F_age;
    string F_profession;
    
    Father(string fn, int fa, string fpro){
        F_name = fn;
        F_age = fa;
        F_profession = fpro;
    }
};
class Mother {
public:
    string M_name;
    int M_age;  
    string M_profession;  
   
    Mother(string mn, int ma, string mpro) {
        M_name = mn;
        M_age = ma;
        M_profession = mpro;
    }
};
class Family : public Father, Mother {
public:
    string C_name;
    int C_age;
    string C_profession;

    Family(string cn, int ca, string cpro,string fn, int fa, string fpro,string mn, int ma, string mpro) 
    : Mother( mn,  ma, mpro) , Father( fn, fa,  fpro){
        C_name = cn;
        C_age = ca;
        C_profession = cpro;
    }

    void display(){
        cout << "\n------Details Of Members In the Family------" << endl;
        cout << "\nFather's Name: " << F_name << endl;
        cout << "Father's Age: " << F_age << endl;
        cout <<"Father's Profession: "<<F_profession<<endl;
        cout << "\nMother's Name: " << M_name << endl;
        cout << "Mother's Age: " << M_age << endl;
        cout <<"Mother's Profession: "<<M_profession<<endl;
        cout << "\nChild's Name: " << C_name << endl;
        cout << "Child's Age: " << C_age << endl;
        cout <<"Child's Profession: "<<C_profession<<endl;
        cout<<endl;
    }
};
int main(){
    Family f1("Viashnavi", 18, "Student" ,"Father" , 40 , "Business" ,"Sakshi" , 38 , "HouseWife");
    f1.display();

    return 0;
}