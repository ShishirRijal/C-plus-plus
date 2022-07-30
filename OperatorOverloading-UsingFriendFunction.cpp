#include <iostream>
#include <string.h>
using namespace std;

class A
{
    char *name;

public:
    A()
    {
    }
    A(char *n)
    {
        name = n;
    }

    char *getName()
    {
        return name;
    }
    friend A operator+(A a, A b);
};

A operator+(A a, A b)
{
    A temp;
    int len = strlen(a.name) + strlen(b.name);
    temp.name = new char[len + 1];
    strcpy(temp.name, a.name);
    strcat(temp.name, b.name);
    return temp;
}

int main()
{
    char x[] = "Shishir", y[] = "Rijal";
    // cin >> x >> y;
    A a(x), b(y), c;
    c = a + b;
    cout << c.getName();

    return 0;
}