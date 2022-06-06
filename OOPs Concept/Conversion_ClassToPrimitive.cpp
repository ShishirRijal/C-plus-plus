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
    operator int() // data type to return  
    {
        return real;
    }

    void show() {
        cout<<this->real <<"+"<<this->img <<"i"<<endl;
    }

};


void greet(string name) {
    cout<<"Hey "<<name<<". How're you doing?"<<endl;
}

int main() {
    Complex c1(3, 7);
    c1.show();
    int x = c1;
    cout<<"x = "<<x<<endl;



    return 0;
}


