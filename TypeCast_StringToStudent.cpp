#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;

public:
    Student(string n, int r = 0)
    {
        name = n;
        roll = r;
    }
    void display()
    {
        cout << "Name = " << name << ", Roll = " << roll << endl;
    }
};

int main()
{
    string name = "Roshan";
    Student s = name;

    s.display();
    return 0;
}