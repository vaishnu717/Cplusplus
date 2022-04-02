#include<iostream>
using namespace std;

int main(){
    int n,q,m;
    cin>>n>>q;
    
    for (int i = 0; i < n; i++) {
        cin>>m;
        arr[i].resize(m);
        for (int j = 0; j < m; j++) {
        cin>>arr[i][j];
        }
    }
    int a, b;
    
    for (int i = 0 ; i < q; i++){
        cin>>a>>b;
        cout << arr[a][b] <<endl;
    }
   
    return 0;
}