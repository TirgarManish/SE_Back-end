/*Simple Calculator Using Functions
o Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.
o Objective: Practice defining and using functions in C++.*/




#include<iostream>
using namespace std;

    int add(int a,int b)
    {
        return a+b;
    }

    int sub(int a,int b)
    {
        return a-b;
    }

    int mul(int a,int b)
    {
        return a*b;
    }

    float divide(int a,int  b)
    {
        return (float)a / b;
    }


int main()
{
    int num1, num2;
    int choose;

    cout<<"\n----------------Welcome The Calculator---------------\n";

    while(true)
        {
        cout<<"\n============================================================================";
        cout<<"\n\nEnter the First Number: ";
        cin>>num1;

        cout<<"Enter the second Number: ";
        cin>>num2;

        cout<<"\n ----------Calculator Menu----------\n";
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;

        cout<<"\nEnter any one option ";
        cin>>choose;

        switch(choose)
        {
        case 1:
           cout<<num1<<" + "<<num2<<" = "<<add(num1,num2);
           break;
        case 2:
            cout<<num1<<" - "<<num2<<" = "<<sub(num1,num2);
            break;
        case 3:
            cout<<num1<<" * "<<num2<<" = "<<mul(num1,num2);
            break;
        case 4:
            if(num2==0)
                cout<<"Division By 0 is not allowed\n";
            else
                cout<<num1<<"/"<<num2<<" = "<<divide(num1,num2);
            break;

        case 5:
            cout<<"Exiting calculator";
            return 0;

        default:
            cout<<"!!Invalid Option!\n Enter the Again";
            break;

        }
    }
}
