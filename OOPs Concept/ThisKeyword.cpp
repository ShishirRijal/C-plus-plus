// this keyword is a pointer variable that holds the address of current object..
#include <iostream>
using namespace std;
class Employee {
    private: 
    string name;
    double salary;

    public:
    // Now let's use a constructor as below
    /*
    Employee(string name, double salary)
    {
        name = name;
        salary = salary;
    }
    So what are we actually doing here?? Well, there is something called scope, which says that
    if there are two same variables in different scope, we are using the varible available in closest scope.
    This means that, we are actullay saying is put the value of argument's salary into the argument's salary
    Well, that doesn't make a sense at all. Does it? It doesn't you fool..
    So, somehow we need a way to differentiate the object memeber variable from the argument
-->> This is where 'this' keyword is used.
    this keyword is available to each function of our class and hold the address of current object
    so saying this.variableName we are referring to the memberVariable of that class...
*/
    // Now using this keyword we can write same constructor as
    Employee(string name, double salary)
    {
        // cout<<"Address of current address(this) = "<<this<<endl; // this prints the address of object
        this->name = name;  // we are using -> instead of . , becuase this is a pointer variable
        this->salary= salary;
    }
    // Let's understand how this code works...
    /*
        this stores the address of the current object
        this->name = name;
        there is a name in memory bolck whose address is hold by this keyword..
        So, go there and set its value to the argument's name 
    */
   
};


int main() {
    Employee e1("Bikram", 45000);

    return 0;
}