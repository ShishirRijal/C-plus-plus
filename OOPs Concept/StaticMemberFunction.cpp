/*
    Static function can only access the static variable and function of that class.
    Is accessed using class name rather than object's name...
*/

#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    static int total;

public:
    Student()
    {
        total += 1;
    }
    ~Student()
    {
        total -= 1;
    }
    static void display()
    {

        cout << "There are total " << total << " students." << endl;
        // cout << name << endl; // ERROR!!
    }
};
int Student::total;

int main()
{
    Student s1, s2, s3, s4;
    Student::display();
    /// OR...... Directly access using class name, but variable must be public
    // cout << "There are altogether " << Student::total << " students in the class." << endl;

    return 0;
}