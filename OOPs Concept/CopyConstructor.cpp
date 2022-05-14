//While copying an object using copy constructor, the constructor is called for that new object..
// It is because we use copy constructor for copying object to new object, which is just being defined at time of copying..
#include <iostream>
using namespace std;

class Employee {
    private: 
    string name;
    double salary;

   public:
   Employee(string employeeName, double employeeSalary){
       name = employeeName;
       salary = employeeSalary;
   }
// Incase you wanna look, how copy constructor is actully defined...
//    Employee(const Employee &e) // passing by value i.e. e would cause infinite recursion.. See why??(V. Imp);
//    {
//        cout<<"Copy constructor called.."<<endl;
//        name = e.name;
//        salary = e.salary;
//    }

    void display()
    {
        cout<<"Name = "<<name<<" Salary = "<<salary<<endl;
    }


};

int main() {

    Employee e1("Rekha", 45000.50);
    Employee *e2 = new Employee("Priya", 25000); 

    // What if we need exactly same properties for a new object as that of e1/
    // It's obvious we can copy.So we do that as below
    Employee e3(e1); // e3.Employee(e1);
    /*
    Doing this, the constructor runs for e3...
    this internally works as..
    e3.name = e1.name;
    e3.salary = e1.salary;
    */
    // e3.display();
    Employee e4(*e2); // we need to derefer e2 before passing it
    // e4.display();
    Employee *e5 = new Employee(e1);
    // e5->display();
    Employee *e6 = new Employee(*e2);
    // e6->display();


///     COPY ASSIGNMENT OPERATOR   


    return 0;
}