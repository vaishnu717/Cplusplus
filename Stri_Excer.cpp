#include <iostream>
#include <string>
using namespace std;

int main(){
    //Program to Find the Frequency of Characters in a String

    string str;
    cout<<"Enter a sentence"<<endl;
    getline(cin, str);

    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch){
            count ++;
        }
    }
    cout<<"The number appears "<<count<<endl;


    //Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String
    int sen;
    getline(cin , sen);

    int vowel ,consonant ,digits , spaces;

    for (int i = 0; i < sen.len(); i++)
    {
        if(sen[i] == 'a' || line[i]== 'e' || line[i]=='i' || line[i]=='o' || line[i]=='u'|| 
        sen[i] == 'A' || line[i]== 'E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        vowel++;
    }

    //program to remove all the characters in string except althabets

    string line;
    getline(cin , line);
    string temp = "";
    
    for (int i = 0; i < line.size(); i++)
    {
        if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'){
            temp = temp + line[i];
        }
    }
    string linee = temp;
    cout<<linee;

    //Program to count no of words

    string str3;
    getline(cin, str3);

    int cnt = 0;

    for (int i = 0; i < str3.size(); i++)
    {
       if (str3[i]==' '){
           cnt++;
       }
    }
    cout<<cnt + 1;
     
    
   return 0;
}