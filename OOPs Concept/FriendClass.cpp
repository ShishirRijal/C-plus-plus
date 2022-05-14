/*
A friend class is one which can access private and protected members of 
other class in which it is declared as friend...
--  Friendship is not mutual
*/
#include <iostream>
using namespace std;
class A {
    private:
    int secretNumber;
    public:
    A() {
        secretNumber = 50;
    }
    friend class B;  
    // if we comment this line we can't access secretNumber in line 23
};

class B {
    public:
    void displaySecretNumber(A &x) {
        cout<<x.secretNumber<<endl;
    }
};

int main() {
    class A a;
    class B b; 
    b.displaySecretNumber(a);

    return 0;
}