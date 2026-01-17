//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.

#include<iostream>

using namespace std;

int main()
{   string name;
    int age;

    cout<<"Enter the Your Name:";
    cin>>name;

    cout<<endl<<"Enter your age: ";
    cin>>age;

    cout << "\nHello " << name << "! You are " << age << " years old." << endl;

 return 0;
}
