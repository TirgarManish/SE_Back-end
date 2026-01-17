// Nested Control Structures
// Write a program that prints a right-angled triangle using stars (*) with a nested loop.
// Objective: Learn nested control structures.

#include<iostream>
using namespace std;

main()
{   int n;

    cout<<"Enter the Right Angle Triangle Size : ";
    cin>>n;

    cout<<endl<<"right angled triangle"<<endl;


    for (int i=0; i<=n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"  ";
        }

        for(int k=1; k<=i; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}
