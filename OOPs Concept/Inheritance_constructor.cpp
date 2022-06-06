#include <iostream>
using namespace std;

/*
    When we create a child class inheriting a base class,
    at the time of object creation, the constructors of both
    class gets trigerred.. It is becuase, base class constructor
    initializes the properties in base class, and derived class
    constructor initializes it's properties..
    In terms of getting trigerred, the derived class constructor is
    trigerred first, which then calls the base class constructor..
    However, in terms of execution, the base class constructor 
    gets executed first, and only the derived class constructor..
    //
    Also, if we have any argument in base class constructor or in 
    child class constructor, we have to explicilty write our own constructor
    because, the default constructor doesn't take any argument..
            /// Destructor
    Unlike in constructor, the child class desturctor get's executed first, 
    and then the base class destructor.. 
    Try, putting cout inside constructor and desctructor to observe this...
*/


class A {
    private: 
    int x;
    public:
    //constructor
    A(int a) {
        x = a;
        cout<<"A is called"<<endl;
    }

    int getA() {
        return x;
    }
    //desctructor, the default one...
    ~A() {
        cout<<"A destroyed"<<endl;
    }
};
class B : public A {
    private: 
    int y;
    public:
    // constructor
    B(int a, int b):A(a) { // Now, if we pass a and b to a object of B
        y = b; // a is assigned to x in base class, and b to y in child class..
        cout<<"B is called"<<endl;
    }
    void display() {
        cout<<"a = "<<getA()<<" b = "<<y<<endl;
    }
    //desctructor
    ~B() { 
        cout<<"B destroyed"<<endl;
    }
    // In destructor we don't explicitly write :A() as in constructor.
    // It is done by compiler with inside coding...
    // So, the default desctrucor works perfectly fine... :(
};




int main() {
    class B b(13, 31); 
    b.display();

    return 0;
}