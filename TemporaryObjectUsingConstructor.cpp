/*
    We can create temporary objects of the class
    calling the constructor explicitly.
    Temporary instance has no name...
*/
#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    Student(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "Name = " << name << endl;
    }
};

int main()
{
    Student s("Shishir");
    s.display();
    Student("Rakesh").display(); // Temporary instance... has no name as well
    return 0;
}