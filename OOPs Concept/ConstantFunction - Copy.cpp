/*
    If we create a constant object of our class, we can only call the const functions for that
    constant object..
    A constant function is one which doesn't make any changes to the object's property..
*/

#include<iostream>
using namespace std;
class Mobile {
    private:
    int id;
    double price;

    public:
    Mobile(int id, int price) {
        this->id = id;
        this->price = price;
    }
    // Ist.... 
//    int getId() {
//        return this->id;
//    }
//     double getPrice() {
//         return this->price;
//     }

    // IInd.......... :)
   int getId() const {
       return this->id;
   }
    double getPrice() const {
        return this->price;
    }


    void setId(int id) {
        this->id = id;
    }
    void setPrice(double price) {
        this->price = price;
    }
    // Ist
    // void display() {
    //     cout<<"Mobile phone "<<this->id<<" costs Rs." <<this->price<<endl;
    // }
    // IInd
    void display() const {
        cout<<"Mobile phone "<<this->id<<" costs Rs." <<this->price<<endl;
    }
};

int main() {
    // Ist
    const Mobile m(1022, 45000); // a const object of Mobile class
   // This should get executed perfetly fine, bcoz we are not making any changes to our
   // objects properties through the getter functions... 
    // cout<<m.getId()<<" "<<m.getPrice()<<endl;
    // OOPs! It didn't work.. But why?? :(
    /*
        It is because, if we want to run any functio for our constant object we have to 
        explicitly mark that function as the const funciton....
    */
   // after marking them as const in IInd, they work just fine... :)
   cout<<m.getId()<<" "<<m.getPrice()<<endl;
   m.display();
    

    

    return 0;
}