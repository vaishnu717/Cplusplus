#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    
    int start = arr[0];
    int end = n-1;
    
    while(start < end){
        int temp = arr[0];
        arr[0] = arr[n]-1;
        arr[n-1] = temp;
    }
    
    for(int i = 0; i < n ; i++){
        cout<<arr[i];
    }
    
    return 0;
}
