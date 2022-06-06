#include <iostream>
using namespace std;

class Complex {
    private:
    int real;
    int img;

    public: 
    Complex () {

    }
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }
    Complex(int a) {
        this->real = a;
        this->img = 0;
    }

    void show() {
        cout<<this->real <<"+"<<this->img <<"i"<<endl;
    }

};


int main() {
    Complex c1(7, 3), c2;
    c1.show();
    // type conversion from class to int
    c2 = 9; // can be interpreted as c2.Complex(9)...
    c2.show();


    return 0;
}