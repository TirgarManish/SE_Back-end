/*Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.
o Objective: Practice conditionalstatements(if-else).
*/

#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter the Marks:";
    cin>>marks;

    if (100>=marks && marks>=80)
    {
        cout<<"Grade A"<<endl;
    }
    else if (marks>=60)
    {
        cout<<"Grade B"<<endl;
    }
    else if (marks>=36)
    {
        cout<<"Grade C"<<endl;

    }
    else
    {
        cout<<"Fail Try nest Time";
    }
}
