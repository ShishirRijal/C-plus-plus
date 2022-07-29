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
    void display()
    {
        cout << "There are total " << total << " students." << endl;
    }
};
int Student::total = 0;

int main()
{
    Student s1, s2, s3, s4;
    s1.display();
    /// OR...... Directly access using class name, but variable must be public
    // cout << "There are altogether " << Student::total << " students in the class." << endl;

    return 0;
}