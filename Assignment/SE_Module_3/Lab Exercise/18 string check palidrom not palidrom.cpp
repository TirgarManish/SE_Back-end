/*String Palindrome Check
o Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).
o Objective: Practice string operations
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"enter the String";
    cin>>str;

    int len=str.length();

    bool ispalidrom=true;

    for(int i=0; i<len/2; i++)
    {
        if(str[i]!=str[len-1-i])
        {
            ispalidrom=false;
            break;
        }
    }

    if(ispalidrom)
        cout<<"String is the palidrom";
    else
        cout<<"string is the not palidrom";
 return 0;

}
