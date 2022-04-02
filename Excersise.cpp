#include<iostream>
using namespace std;
int flag;
int prime(int m){
    for(int i = 1; i < m; i++)
    {
        if(i == 1 || i == 0)
        continue;

        for (int j = 1; j < i; j++)
        {
            if (i%j==0){
                flag = 0;
                break;
            }
        }
        flag = 1;
        //cout<<i<<" ";
        if (i+(m-i)==m){
            cout<<i<<" + "<<m-i<<" = "<<m<<endl;
        }
    }
}

int main(){
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    prime(m);

}