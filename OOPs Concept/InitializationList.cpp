/*
    Initialization list is used when we want to initialize the constant variable
*/
#include <iostream>
using namespace std;

class Vehicle {
    private:
    const int id; 
    int wheels;
   const int &idRef; // just to show how to initialize reference variable
    public:
    // This one produces an error, because our program has already created a id variable and
    // assigned it to some garbage value before entering the constructor... 
    // So what we are doing is changing the value of id from garbage to some particular value
    // inside the constructor, which is invalid as id is const....
    // Vehicle(int id, int wheels ) {
    //     this->id = id;
    //     this->wheels = wheels;
    // }
    // In such case, initializaion list is used...
    Vehicle(int id, int wheels) : id(id), wheels(wheels), idRef( this->id) {
        // nothing
    }
    // By doing so, we are assiging values to our variable at the time of creation, before entering
    // the constructor;;



};


int main() {
    Vehicle v(12, 23);
    cout<<"Compiled?? Well it's successful!"<<endl;



    return 0;
}