#include <iostream>
using namespace std;

int main()
{

    //-------1) Input Functions: ----------

    string function;

    // used to get steam of input from user
    getline(cin, function);

    cout << "The intial string is ";
    cout << function << endl;

    // This function is used to input a character at the end of the string.
    function.push_back('v');

    cout << "The string after push_back operation is : ";
    cout << function << endl;

    // used to delete the last character from the string
    str.pop_back();

    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    //--------2) Capacity Functions:-----------

    string str = "Vaishnavi is great ";

    cout << "The initial string is : ";
    cout << str << endl;

    // This function changes the size of the string, the size can be increased or decreased.
    //  Resizing string using resize()
    resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;

    // This function returns the capacity allocated to the string
    // capacity();

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    // This function finds the length of the string.
    // length();

    // Displaying length of the string
    cout << "The length of the string is :" << str.length() << endl;

    // This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.
    //  Decreasing the capacity of string
    // shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;

    //----------3) Iterator Functions: ----------

    // This function returns an iterator to the beginning of the string.
    // begin()

    // This function returns an iterator to the end of the string.
    // end()

    // rbegin()
    // vaishnavi
    // This function returns a reverse iterator pointing at the end of the string.

    // rend()
    // ivanhsiav
    // This function returns a reverse iterator pointing at beginning of the string.

    //--------------4) Manipulating Functions:----------------

    // Declaring 2nd string
    string str2 = "geeksforgeeks rocks";

    // copy(“char array”, len, pos)
    // This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str1.copy(ch, 13, 0);

    // Displaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl;

    // swap()
    // This function swaps one string with other.

    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;

    //--------------RAW STRING-----------------
    // A raw string literal is a string in which the escape characters like \n, \t or \”  of C++ are not processed.
    // R"(vaishnu.\n aaryan.\n v.\n)"; --> syntax

    // A Normal string
    string string1 = "Geeks.\nFor.\nGeeks.\n";

    // A Raw string
    string string2 = R"(Geeks.\nFor.\nGeeks.\n)";

    cout << string1 << endl;

    cout << string2 << endl;

    //-----------Array of Strings--------------- learn
    ///---------->LEARN

    //---------Tokenizing a string------------   Red
    // Tokenizing a string denotes splitting a string with respect to some delimiter(s).

    //------------stringstream --------------  learn
    // Using stringstream
    // LEARN

    //------------strrchr() function----------------  red
    // This function returns a pointer to the last occurrence of a character in a string.
    // cstring is the header file required for string functions.

    char str[] = "This is a string";
    char *ch = strrchr(str, 'a');
    cout << ch - str + 1;

    return 0;
}
