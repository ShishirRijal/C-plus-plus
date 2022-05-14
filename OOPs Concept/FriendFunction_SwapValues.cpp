/*
    A good implementation of friend function where we use it to swap the values of member variables of two classes...
*/

#include <iostream>
using namespace std;

class B;
class A {
    int a;
    public: 
    void setValue(int value) {
        a = value;
    }
    int getValue(){
        return a;
    }
    friend void swap(A &a, B &b);

};
class B {
    int b;
    public: 
    void setValue(int value) {
        b = value;
    }
    int getValue(){
        return b;
    }
    friend void swap(A &a, B &b);
};

void swap(A &a, B &b) {
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}

int main() {
    class A a;
    class B b; 
    /// 
    a.setValue(45);
    b.setValue(25);
    cout<<"Before swap: "<<endl;
    cout<<"a = "<<a.getValue()<<" b = "<<b.getValue()<<endl;
    swap(a,b);
    cout<<"After swap: "<<endl;
    cout<<" a = "<<a.getValue() <<" b = "<<b.getValue()<<endl;

    return 0;
}
