#include <iostream>
using namespace std;

// Class is the blueprint
class Employee 
{
    public:  // Access modifiers: public/protected/private 
    int id;
    string fullName;
    double salary;
    string role;
};

int main() {
    
// An object is an instance of the class
// Inshort, classes are the user-defined data types and the objects are the 
// variables of that datatype...
Employee e1;  // a memory is allocated in stack memory
Employee *e2 = new Employee; // a memory is allocated in heap memory;
// now e2 stores the address of new object of employee class  that is created in heap memory
// cout<<sizeof(e1)<<" "<<sizeof(e2); 

//How we access the instance of statically created object
e1.id = 101;
e1.fullName = "Roshan Kandel";
e1.salary = 34500.00;
e1.role = "frontend developer";
cout<<e1.fullName<<" earns around Rs."<<e1.salary<<" as a "<<e1.role<<endl;

// This is how we access the instance of dynamically created objects
e2->id = 102; //same as (*e2).name --> here we first derefer our object and then access it's members 
e2->fullName = "Pooja Khatiwada";
e2->role = "graphics designer";
e2->salary = 50000.25;
// e2.salary = 4500.0;  // THis produces and error, because we can't use . operator with pointer variable
cout<<e2->fullName<<" earns around Rs."<<e2->salary<<" as a "<<e2->role<<endl;

    return 0;
}