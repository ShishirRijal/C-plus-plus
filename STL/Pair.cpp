/*
    Pair is a class template that provides a way to store two
    heterogeneous objects as a single unit.
    The first element is referenced as ‘first’ and
    the second element as ‘second’ and
    the order is fixed (first, second).
*/

#include <iostream>
#include <tuple>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string name, double salary)
    {
        this->name = name;
        this->salary = salary;
    }
    string getName()
    {
        return this->name;
    }
};

int main()
{
    Employee e1("Bharat", 50000);
    // Initialize the pair
    pair<string, string> p1 = make_pair("Shishir", "Dang");
    pair<string, int> p2("Flutter", 2017);
    pair<int, Employee> p3 = make_pair(101, e1);
    // access the first and second  elements
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << (p3.second).getName() << endl;
    // swap the pair
    pair<string, int> p4 = make_pair("Dart", 2011);
    p2.swap(p4);
    cout << "After swap" << endl;
    cout << "P2 => " << p2.first << " " << p2.second << endl;
    cout << "P4 => " << p4.first << " " << p4.second << endl;
    // tie() -> unpack the pair values into separate variables
    string name;
    int dateOfRelease;
    tie(name, dateOfRelease) = p4;
    cout << name << " " << dateOfRelease << endl;
    return 0;
}