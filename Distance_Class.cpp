/*
4.	Define a class named Distance with meter and centimeter as private members.
Use appropriate member functions to read and display data members.
Use class Distance to read two objects of distance class and
add them by passing this objects to the function and display the result.
*/

#include <iostream>
using namespace std;

class Distance
{
    int m;
    int cm;

public:
    Distance()
    {
        m = 0;
        cm = 0;
    }
    Distance(int m, int cm)
    {
        this->m = m;
        this->cm = cm;
    }
    void display()
    {
        cout << "Distance = " << m << "m " << cm << "cm" << endl;
    }
    void add(Distance d)
    {
        cm = cm + d.cm;
        m = m + d.m + cm / 100;
        cm = cm % 100;
    }
    void subtract(Distance d)
    {
        cm = cm - d.cm;
        if (cm < 0)
        {
            cm += 100;
            m--;
        }
        m = m - d.m;
    }
};

int main()
{
    Distance d1(4, 50), d2(3, 90);
    d1.add(d2);
    d1.display();
    d2.display();
    d1.subtract(d2);
    d1.display();

    return 0;
}