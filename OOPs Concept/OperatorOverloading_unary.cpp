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
    
    Complex operator -() { // I'm not passing argument, bcoz I want to 
                          // make this - an unary opearator
        Complex temp;
        temp.real = -real;
        temp.imaginary = -imaginary;
        return temp;
    }
    // Let's work with increment operator
    Complex operator ++() {
        Complex temp;
        temp.real = ++real;
        temp.imaginary = ++imaginary;
        return temp;
    }
    Complex operator ++(int) { // There's not need of int argument,except to 
                              // differentiate these two functions
          Complex temp;        
        temp.real = real++;
        temp.imaginary = imaginary++;
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
    c3 = -c3; /// The position of opearator depends on the position of 
             ///that operator in primitive operation
    c3.show();
    cout<<"Now let's see unary"<<endl;
    c2 = ++c1; // this callls the one without argument... 
    c2.show(); 
    c1.show();
    c1 = c2++; // This calls the one with argument
    c1.show();
    c2.show();
    
    return 0;
}