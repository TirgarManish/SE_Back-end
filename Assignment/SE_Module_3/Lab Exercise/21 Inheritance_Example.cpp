/*Inheritance Example
o Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.
*/
#include<iostream>
#include<string>
using namespace std;

class Person
{
protected :
    string name;
    int age;
public:

    void setPerson(string n, int a)
    {
        name=n;
        age=a;
    }

    void showPerson()
    {
        cout<<"\n Name:"<<name<<endl;
        cout<<" Age: "<<age<<endl;
    }
};

class Student: public Person
{
protected:
    int rollNo;
public:

    void setStudent(string n,int a, int r )
    {
        setPerson(n,a);
        rollNo=r;
    }

    void showStudent()
    {
        showPerson();
        cout<<" Roll NO. : "<<rollNo<<endl;
    }
};

class Teacher: public Person
{
protected:
    string subject;
public:

    void setTeacher(string n,int a,string s )
    {
        setPerson(n,a);
        subject=s;
    }

    void showTeacher()
    {
        showPerson();
        cout<<" Subject : "<<subject<<endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.setStudent("Manish",25,121);
    t.setTeacher("Rajesh",36,"Computer science");

    cout<<"\n----------Student Details-------------";
        s.showStudent();

    cout<<"\n----------Teacher Details-------------";
        t.showTeacher();

    return 0;

}
