/* Class for a Simple Calculator
o Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.
o Objective: Introduce basic class structure.
*/
#include<iostream>
using namespace std;

class calc
{
public:
    int addition(int a,int b)
    {
        return a+b;
    }
    int subtraction(int a, int b)
    {
        return a-b;
    }

    int multiply(int a,int b)
    {
        return a*b;
    }

    float divided(int a,int b)
    {
       return (float)a / b;
    }

};

int main()
{
    calc c;

    int n1,n2,choose;

    while(true)
    {
        cout<<"\n\n============================================================\n";
        cout<<"Enter the First Number: ";
        cin>>n1;

        cout<<"Enter the Second Number: ";
        cin>>n2;

        cout<<"\n----------Calculator Menu----------\n";
        cout<<"1.addition\n";
        cout<<"2.Subtraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.division\n";
        cout<<"5.Exit\n";

        cout<<"Enter The option: ";
        cin>>choose;

        switch(choose)
        {
        case 1:
            cout<<n1<<" + "<<n2<<" = "<<c.addition(n1,n2);
            break;

        case 2:
            cout<<n1<<" - "<<n2<<" = "<<c.subtraction(n1,n2);
            break;

        case 3:
            cout<<n1<<" * "<<n2<<" = "<<c.multiply(n1,n2);
            break;

        case 4:
            if(n2==0)
                cout<<"0 division by not allowed";
            else
                cout<<n1<<" / "<<n2<<" = "<<c.divided(n1,n2);
            break;

        case 5:
            cout<<"Exiting Calculator\n\n";
            return 0;
        default:
            cout<<"Enter The correct Option";
        }
    }
}


