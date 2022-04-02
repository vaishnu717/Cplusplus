#include <iostream>
using namespace std;

//3) Write a Program to Convert Binary Number to Decimal manually by creating user-defined functions.
// int decimal(n){
//     int i = 0;
//     int decimal_no = 0;
//     int rem = 0;
//     while (n!=0){
//         rem = n%10;
//         decimal_no = decimal_no + rem * pow(2, i);
//         n = n/10;
//         i++;
//     }

// }

int binary(n){
    int i = 0;
    int rem = 0;
    while (n!=0){
        rem = n%2;
        n = n/2;
        bin = bin + rem * i;
        i = i*10;

    }
}

int main(){
double n;
cout <<"Enter a Binary number: ";
cin<<n;
decimal(n)

    return 0;
}