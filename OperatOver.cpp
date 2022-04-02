//Operator Overloading

class complex{
    private:
    int real,imag;
    complex(int r,int i){
        real = r;
        imag = i;
    }

};
// funtion overloading
class Apnacollege{
    public:
    void fun(){
        cout<<"no argument "<<endl;
    }
    void fun(int x){
        cout<<"with argument "<<endl;
    }
    void fun(double x){
        cout<<"with double arrgument"<<endl;
    }
};
int main(){
    Apnacollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}