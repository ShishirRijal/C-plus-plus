/*
    A base class pointer can point to the object of it's descendant class,
    however the reverse is not true..
*/

#include <iostream>
using namespace std;

class Car{
    public: 
        // Ist.. Early binding
    // void changeGear() {
    //     cout<<"Car's gear changed...."<<endl;
    // }
    
    /// IInd.. Late binding
   virtual void changeGear() {
        cout<<"Car's gear changed.."<<endl;
    }

    // By doing this, the binding will be done at runTime.. So during the function call, 
    // pointer's content will be prioritized, not it's type..
    // Since, pointer holds the content of superCar object, function written in superCar
    // will get executed..
};




class SuperCar : public Car {
    public:
    void changeGear() { // Function overriding...
        cout<<"Supercar's gear changed..."<<endl;
    }
};

int main() {

                // Ist...
    // Car c, *p;
    // SuperCar s;
    // // Her pointer of Car can point the object of SuperCar, so let's do it..
    // p = &s;
    // // Here, the idea is that if we call the changeGear function for superCar, the supercar's 
    // // function should run, not of base class Car's one..
    // s.changeGear(); // This works perfect...
    // p->changeGear();// OOPs! The base class's function run!...:(
    // So what's wrong....?
    /*
        The thing is that, when we call function changeGear with s., 
        We know the compiler does the binding of right version of function looking at the
        call of function, which is called early binding...
        s.changeGear();
        --> Here the compiler looks at type of s, which is superCar.. So the Supercar's function
        is executed when we call it...
        p->changeGear();
        --> At compiler time, the compiler don't know the address inside the pointer, 
        but only at runTime when the memory is allocated..The compiler only knows its type at
        compiler time, not the address it stores..
        So at early binding, the comipler will look for the type of pointer p, which is of 
        type car.. So the control goes to car class, and thus the changeGear function for the 
        car class gets executed...
            But we don't want functionality of car for superCar when we have overrriden it...
    */

                     // IInd.....
    /*
        So, what's the solution?...
        Avoid early binding(pointer type), implement late binding...
        So, at the run time it can know what's content of pointer...
        We can tell compiler to do late(runtime) binding of function by writing keyword
        ahead of parent function name...
    */
   Car c,*p;
   SuperCar s;
   p = &s;
   s.changeGear();
   p->changeGear();
   // Now both funtions work fine... :)

    return 0;
}