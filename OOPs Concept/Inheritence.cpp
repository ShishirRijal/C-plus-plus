/*
    It is unidirectional...
    It is of following types:
    1. Single Level
    2. Multilevel
    3. Multiple
    4. Hierarchial Inheritence
    5. Hybrid 
*/
#include<iostream>
using namespace std;

// Base class
class Person {
    private:
    string name;
    //
    protected:
    void setName(string name) {
        this->name = name;
    }    
    //
    public:
    void sleep() {
        cout<<"Has slept"<<endl;
    }
    string getName() {
        return this->name;
    }
};

class Programmer : public Person{
    private:
    string languages[2];
    public:
    void setMyName(string name) {
        setName(name);
    } 
    void code () {
        cout<<"Started coding.. :*"<<endl;
    }   
};


int main() {
    class Programmer p;
    // Error. We can't access protected member from main function
    // p.setName("Shishir");  
    // Instead we can do same task with our public method of class Programmer
    p.setMyName("Rishikesh");
    cout<<p.getName()<<endl; // It's perfectly fine though..
    p.sleep(); // method defined in person
    p.code(); // method defined in programmer
    return 0;
}