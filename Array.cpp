#include <iostream>
using namespace std;

int main(){
   //size
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
   
   //input loop
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"Enter a number: ";
       cin>>arr[i];
    }

    //output loop
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }
    cout<<endl;

    cout<<"//------------------------------2D ARRAY----------------------------"<<endl;

   int row,col;
   cout<<"Enter the no of rows: ";
   cin>>row;
   cout<<"Enter the no of coloums: ";
   cin>>col;

   int array[row][col];

   //input in 2d array
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         cout<<"Enter a number: ";
         cin>>array[i][j];
      } 
   }

   //output loop in 2d array
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         cout<<array[i][j]<<" ";
      }
      cout<<endl;
   }

    return 0;
}   