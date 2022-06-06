/*
    An abstract class is one which contain pure virtual function...
    It can't be instantiated... 
    ...
    An abstract class is used to represent a generalized blueprint of
    other classes which inherit it, but itself has no meaning in 
    that context.. 
*/

#include <iostream>
using namespace std;

class Person{
    public: 
    int age;
    string name;
    public:
    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    // We add virtual keyword ahead of a 'do nothing function' 
    // to ensure late binding.. It makes sure, that we can't 
    // access this function even with the pointer of the 
    // child class..
    virtual void task() = 0; //pure virtual function.. 
    string  getName() {
       return this->name;
    }
};

class Student : public Person {
    public: 
    // It is must to override the do nothing function in child class
    // if we want to instantiate it..Else, define this one as 
    // pure virtual class.
    void task() {
        cout<<"do assignment and study well"<<endl;
    }
};

class Teacher : public Person {
    public: 
    void task() {
        cout<<"teach well with proper concepts."<<endl;
    }
};
int main() {
    // In database of student and teacher, 
    // a general person has no meaning as it represent neither
    // so must not be initialized.. Hence an abstract class..
    // Person p; /// Error
    Student s;
    Teacher t;
    s.setName("Rupesh");
    t.setName("Visho");
    cout<<s.getName()<< " must ";
    s.task();
    cout<<t.getName()<<" must ";
    t.task();
    return 0;
}