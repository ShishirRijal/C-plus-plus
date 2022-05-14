#include <iostream>
using namespace std;
class Vehicle {
    private:
    const int id; 
    int wheels;
   const int &idRef; // just to show how to initialize reference variable
    public:
    // This one produces an error, because our program has already created 
    // a id variable and assigned it to some garbage value before entering 
    // the constructor... 
    // So what we are doing is changing the value of id from garbage 
    /// to some particular value
    // inside the constructor, which is invalid as id is const....
    // Vehicle(int id, int wheels ) {
    //     this->id = id;
    //     this->wheels = wheels;
    // }
    // In such case, initializaion list is used...
    Vehicle(int id, int wheels) : id(id), wheels(wheels), idRef( this->id) {
        // nothing
    }
    // By doing so, we are assiging values to our variable at the time of 
    // creation,  before entering the constructor;;
    void display() {
        cout<<"Car "<<this->id<<" has "<<this->wheels<<" wheels."<<endl;
    }
};


int main() {
    int id = 101, wheels = 34;
    Vehicle v(id, wheels);
    v.display();
 // works fine :)
    return 0;
}
