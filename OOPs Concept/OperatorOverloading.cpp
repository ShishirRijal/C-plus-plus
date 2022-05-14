/*
    Operator overloading is the condition in which an operator is overloaded with 
    more than one job..
    It is a way to implement compile time polymorphism..
    Any C operator can be used as the function name, preceeded by operator keyword, 
    except sizeof() and ternary i.e. ?: ....
*/
#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int imaginary;
    public:
    void setData(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    void show() {
        char sign;
        if(imaginary>=0)
            sign = '+';
        else 
            sign = '-';
        cout<<this->real <<sign<< abs(this->imaginary) <<"i"<<endl;
    }
    // let's overload + operator to add two complex numbers
    Complex operator +(Complex c) {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imaginary = this->imaginary + c.imaginary;
        return temp;
    }
};


int main()
{
    Complex c1, c2, c3;
    c1.setData(4, 5);
    c2.setData(5, -8);
    c3 = c1+c2;  // --> c3 = c1.operator+(c2);
    c3.show();    

    return 0;
}