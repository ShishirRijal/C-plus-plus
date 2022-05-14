/*
A friend function is one which is given a special permission to access the 
private and protected members of a class. It may be either a 
- function of another class or, 
- a global function.

*/
#include<iostream>
using namespace std;


// We have used class A in line 18, so forward declaration of class A is needed to ensure that
// is a class A in our program...
class A;

class B {
    public:
    void displaySecretNumber(A &x);
    void display(A &x);
    // Here we are only declaring our function, but will define later on...

   
};


class A {
    private:
    int secretNumber;
    public: 
    A() {
        secretNumber = 100;
    }
    // friend void B::displaySecretNumber(A &x);
    friend void B::displaySecretNumber(A &x);
    // global friend function
    friend void add(A &x);

};

 // Since we have only declared displaySecretNumber(A &x) as the friend function, so we have access to
    // private member of another class, only through this function alone....
    // void display(A &x) {
    //     cout<<x.secretNumber<<endl;
    // }

void B::displaySecretNumber(A &x) {
        cout<<x.secretNumber<<endl;
    }
    // Since display function is not a friend function of class A, it can't have access to secretNumber..
    // So below code produces an error....
// void B::display(A &x) 
// {
//     cout<<x.secretNumber<<endl;
// }

void add(A &x) {
        cout<<"Incremented secretNumber = "<<x.secretNumber + 50<<endl;
    }


int main()
{
    class A a;
    class B b; 
    b.displaySecretNumber(a);
    add(a);    
    return 0;
}