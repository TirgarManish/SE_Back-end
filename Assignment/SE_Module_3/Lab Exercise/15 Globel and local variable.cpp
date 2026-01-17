/*Variable Scope
o Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.
o Objective: Reinforce the concept of variable scope.
*/

#include <iostream>
using namespace std;

// Global variable
int x = 100;

void demoFunction()
{
    // Local variable with same name as global
    int x = 50;

    cout << "Inside function (local x) = " << x << endl; // Local x
    cout << "Inside function (global x) = " << ::x << endl; // Global x using scope resolution
}

int main()
{
    cout << "In main (global x) = " << x << endl; // Global x

    demoFunction();

    // Global x is still accessible
    cout << "After function (global x) = " << x << endl;

    return 0;
}
