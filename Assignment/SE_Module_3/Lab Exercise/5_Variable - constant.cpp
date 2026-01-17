
/*Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them.
o Objective: Understand the difference between variables and constants.
*/

#include <iostream>
using namespace std;

int main() {
    // Variables
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    string name = "Manish";

    // Constant
    const double PI = 3.14159;  // Value cannot be changed

    // Displaying values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Constant PI: " << PI << endl;

    // Performing operations
    age += 5;  // Increment age
    height = height + 0.5;  // Increment height

    cout << "\nAfter 5 years:" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;

    // Trying to change constant (Uncomment to see error)
    // PI = 3.14;  //  Error: Cannot modify a constant

    return 0;
}
