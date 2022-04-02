#include<iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    
    static int random() {
        return timeToComplete ;
    }

    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }

};

int main(){

    // hero aaryan;
    
    // //static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B')
    // cout<< "Level" <<a.level<<endl;
    // cout<< "Health"<<a.getLevel()<<endl;

    // //dynamic allocation
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(70)
    // cout<< "Level" <<(*b).level<<endl;
    // cout<< "Health"<<(*b).getLevel()<<endl;

    // cout<< "Level" <<b->level<<endl;
    // cout<< "Health"<<b->getLevel()<<endl;


}