#include <iostream>
#include <string>
using namespace std;

//Exception handling

class Printer{
    string name;
    int available_paper;
public:
    Printer(string name , int paper){
        name = name;
        available_paper = paper; 
    }
    void print(string txtdoc){
        int required_paper = txtdoc.length()/10;  //40/10 = 4 papers
        if (required_paper > available_paper)
        //throw "No paper";
        throw 101;  //exception

        cout<<"Printing....."<<"\n"<<txtdoc<<endl;
        available_paper = available_paper - required_paper;
    }
};

int main(){
    Printer myprint("HP deskjet 1234", 10);
    try //a try block
    {
        myprint.print("Hello my name is Vaishnavi. I am a upcoming Programmer");
        myprint.print("Hello my name is Vaishnavi. I am a upcoming Programmer");
        myprint.print("Hello my name is Vaishnavi. I am a upcoming Programmer");   
    }
    catch(const char* txtException){  //text const char
        cout<<"Exception "<< txtException << endl;
    }
    catch(int excode){    // integer exception
        cout<<"Exception "<< excode << endl;
    }
    catch(...){ //default exception handler
        cout<<"Default Exception handler"<<endl;
    }
    
    return 0;
}