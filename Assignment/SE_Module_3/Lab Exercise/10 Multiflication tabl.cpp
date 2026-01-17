#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    cout<<"Multiplication Table"<<endl;

    for(int i=1; i<=10; i++)
    {
        cout<<i<<"*"<<num<<" = "<<i*num<<endl;
    }
}
