#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       sum = sum + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<"\n"<<sum;
    
    return 0;
}