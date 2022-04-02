//--------------------------------BASICS OF C++ PROGRAM [DATA TYPES,VARIABLES,OPERATORS]---------------------------------------
// First C++ program to print Hello World  //
#include <iostream>
#include <iomanip>
using namespace std;

int glo = 6; // this is a Global variable

int main()
{
   cout << "Hello World";
   cout << endl;

   // Then we are going to began with DATA TYPES
   // There are Types of Data Types:
   // 1. Build in Data Types
   /* Int-> 4BYTE --> 32BIT Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
      Float-> 8BYTE--> 64BIT  Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
      Char-> 1BYTE --> 8BITS Char is used to store a single character e.g. ('a', 'b',' c', 'd') char [20]
      Boolean-> 1BYTE --> 8BITS Boolean is used to store "true" or "false."
      Double-> 8BYTE--> 64BITS Double is also used to store decimal numbers but has more precision than float, e.g. (10.5895758440339...)  */
   // 2. Derived Data Types:
   // Derived data types are created from basic data types such as int, float, char, etc.
   /* Function int sum(){}
      Array    int arr[]
      Pointer  int* ptr
      Reference */
   // 3. User defined Data types:
   // Using user-defined data types, the programmer can invent his/her own data types in C programming.
   /* Class       sum(){};
      Structure   struct sum{};
      Union       union sum{};
      Enumeration enum sum{};
      */

   // TYPE CASTING
   // IT CONVERTS INT TO CHAR & CHAR TO INT BUT ONLY ASCII VALUES  //to print size we use "sizeof()"

   // C++ program to print sizes of data types:
   cout << "Size of char : " << sizeof(char) << " byte" << endl;
   cout << "Size of int : " << sizeof(int) << " bytes" << endl;
   cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
   cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
   cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
   cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
   cout << "Size of float : " << sizeof(float) << " bytes" << endl;
   cout << "Size of double : " << sizeof(double) << " bytes" << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

   int aar = 45.3f;
   int yan = 45.6l;
   cout << "The size of 34.4 is " << sizeof(34.4) << endl;
   cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
   cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
   cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
   cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

   int g = 45;
   float m = 45.46;
   cout << "The value of a is " << (float)g << endl;
   cout << "The value of a is " << float(g) << endl;

   cout << "The value of b is " << (int)m << endl;
   cout << "The value of b is " << int(m) << endl;
   int o = int(m);

   cout << "The expression is " << g + m << endl;
   cout << "The expression is " << g + int(m) << endl;
   cout << "The expression is " << g + (int)m << endl;

   cout << endl;

   // VARIABLES IN C++
   // A variable is a name given to a memory location. It is the basic unit of storage in a program.
   // Local Variables --> local variables are declerared inside the braces of any fuction and can be accessed only from there
   // Global Variables --> Global variables are declared outise of any fuction and can be accessed from anywhere
   // Static Variables
   // BASICS INPUT AND OUTPUT IN C++

   int s = 2, h = 56, n = 678;
   cout << "the value of without setw is:" << s << endl;
   cout << "the value of without setw is:" << h << endl;
   cout << "the value of without setw is:" << n << endl;

   cout << "the value of s is " << setw(4) << s << endl;
   cout << "the value of h is:" << setw(4) << h << endl;
   cout << "the value of n is:" << setw(4) << n << endl;

   int glo = 56;          // this is local variable ---> importance is given to local
   const float pi = 3.14; // const prevents value of variable from changing
   cout << pi;
   int num1, num2;
   cout << "Enter number one:\n";
   cin >> num1;
   cout << "Enter number two:\n";
   cin >> num2;
   cout << "sum of the two nuumber is = " << num1 + num2;
   cout << endl;
   cout << glo;

   // OPERATORS IN C++
   /* Arithmetic Operators
      Relational Operators
      Logical Operators
      Bitwise Operators
      Assignment Operators
      Pre Increment operators
      Post Increment operators
      Misc Operators */

   int a = 4, b = 5;
   cout << "Operators in C++:" << endl;
   cout << "Following are the types of operators in C++" << endl;

   // Arithmetic operators
   cout << "The value of a + b is " << a + b << endl;
   cout << "The value of a - b is " << a - b << endl;
   cout << "The value of a * b is " << a * b << endl;
   cout << "The value of a / b is " << a / b << endl;
   cout << "The value of a % b is " << a % b << endl;
   cout << "The value of a++ is " << a++ << endl;
   cout << "The value of a-- is " << a-- << endl;
   cout << "The value of ++a is " << ++a << endl;
   cout << "The value of --a is " << --a << endl;
   cout << endl;

   // Assignment Operators --> used to assign values to variables
   // int a=3, b=9;
   // char d='d';

   // Comparison operators
   cout << "Following are the comparison operators in C++" << endl;
   cout << "The value of a == b is " << (a == b) << endl;
   cout << "The value of a != b is " << (a != b) << endl;
   cout << "The value of a >= b is " << (a >= b) << endl;
   cout << "The value of a <= b is " << (a <= b) << endl;
   cout << "The value of a > b is " << (a > b) << endl;
   cout << "The value of a < b is " << (a < b) << endl;

   // Logical operators
   cout << "Following are the logical operators in C++" << endl;
   cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
   cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
   cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

   // Operator Precedence
   int sak = 3, pra = 4;
   // int c = (sak*5)+pra;
   int khu = (((sak * 5) + pra) - 45) + (87);
   cout << khu;
}
//-----------------THIS WAS BASIC INTRODUCTION TO C++ WE LEARN MORE ABOUT IT IN NEXT PROGRAM ---------------------------------