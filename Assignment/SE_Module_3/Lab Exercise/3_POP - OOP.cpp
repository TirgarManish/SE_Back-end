/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.
*/
/*
//Program 1: Procedural Programming (POP)

#include<iostream>
using namespace std;

CalculateArea(int length,int breadth)
{
 return length*breadth;
}

int main()
{
  int length;
  int breadth;

  cout<<"Enter Length: ";
  cin>>length;

  cout<<"Enter breadth: ";
  cin>>breadth;

  cout<<"area of Rectangal: "<<CalculateArea(length,breadth)<<endl;
}
*/

// program 2: Orianted Programing Language

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;   // Object creation
    rect.input();
    cout << "Area of rectangle = " << rect.area() << endl;

    return 0;
}

