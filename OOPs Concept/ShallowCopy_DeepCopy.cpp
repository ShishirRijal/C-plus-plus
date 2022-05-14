// Shallow copy works fine when I work with string instead of character...
#include <iostream>
#include<cstring>
using namespace std;

class Student {
    private:
    int id;
    char *name; // We want to dynamically create name 
    public: 
    // Shallow copy, and should be avoided
    // In shallow copy we are just copying the addresss of name variable to our object's name 
    // pointer variable.. So any change to the address of variable will reflect in the object's 
    // memeber variable... So it should be avoided
    // Student(int id, char *name) {
    //     this->id = id;
    //     this->name = name;
    // }
    // DEEP COPY    
    Student(int id, char *name) {
        this->id = id;
        // Let's get studen't name size, dynamically create name variable for our object
        this->name = new char[strlen(name) + 1]; // one for null character
        // Now, instead of copying the address of variable, let's copy the entire string in that
        // variable and put that in our object's name...
        // In this way we created two independent variables and thus changes in variable, won't
        // reflect in our student's name..
        strcpy(this->name, name);

    }


    void display() {
        cout<<this->id <<" "<<this->name<<endl;
    }


};

int main() {
    //  SHALLOW COPY 
        /*
    When I work with shallow copy, I change the name of s1 when I change the
    variable name.. It is because in shallow copy, we are just copying only the address of name
    variable in our object's name pointer... so when we change name, the previous object's name
    pointer is still pointing to same variable and thus, the name changes though undesired... 
    */
   
    char name[20] = "Shishir";
    Student s1(134, name);
    s1.display();
    name[2] = 'e';
    Student s2(451,name);
    s2.display();
    s1.display();



    

    return 0;
}