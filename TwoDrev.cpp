#include <iostream>
using namespace std;

void swap(int* a , int* b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[n][m]){

    for (int i = 0; i < count; i++)
    {
       int start = 0;
       int end = n-1;

    }
    
}

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m;j++)
        {
            cin>>arr[i][j];
        } 
    }
    
    for (int i = 0; i < n; i++){
       for (int j = 0; j < m; i++)
       {
           cin>>arr[i][j];
       }
       cout<<endl;
       
    }
    
    return 0;
}