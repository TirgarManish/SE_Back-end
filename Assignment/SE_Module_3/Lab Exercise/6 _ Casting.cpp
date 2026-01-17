/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.
o Objective: Practice type casting in C++.
*/

#include <iostream>
using namespace std;

int main() {

    // -------- Implicit Type Conversion --------
    int a = 10;
    float b = 5.5;

    float sum = a + b;   // int is automatically converted to float

    cout << "Implicit Type Conversion:" << endl;
    cout << "Sum (int + float) = " << sum << endl;

    // -------- Explicit Type Conversion --------
    float x = 9.8;
    int y;

    y = (int)x;   // Explicit type casting from float to int

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Float value = " << x << endl;
    cout << "After casting to int = " << y << endl;

    // -------- Another Example --------
    int p = 5, q = 2;
    float result;

    result = (float)p / q;  // Explicit conversion to get decimal result

    cout << "\nExplicit Conversion in Division:" << endl;
    cout << "Result = " << result << endl;

    return 0;
}
