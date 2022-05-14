//It is necessary to keep in mind that a constructor runs only once for a object durin the time of 
// it's creation
#include <iostream>
using namespace std;

class Employee {
    private: 
    string name;
    double salary;


    /*
    // A constructor is a special function having same name as that of class, and runs
    // only one time during the lifecycle of that object to initialize it's value
    // If we donot define any constructor for a class, by default a default constructor runs
    // A default constructor has no arguments and no return type
    Employee(){

    }
    But, we want to define our own constructor, to initialize the values of our member variables..
    So we can do that too... But keep in mind that, if we define our own constructor the default constructor
    is destroyed and if we want that default constructor in our program we have to explicitly define that too
    in our code...
    */
   public:
   //Let's define our own constructor that takes two arguments and sets the values to our member variables.
   Employee(string employeeName, double employeeSalary){
       
       name = employeeName;
       salary = employeeSalary;
   }
    //By doing so, we make it compulsory to give name and salary of employee at the time of it's declaration
    //let's have a getter
    void display()
    {
        cout<<"Name = "<<name<<" Salary = "<<salary<<endl;
    }




};

int main() {
    // // This one produces error for our constructor as it asks for two arguments 
    // Employee e1; // when we declare an object e1, what happens is a default constructor runs for that object
    //             // to initialize it's value with some garbage value;
    // So let's define one object 
    Employee e1("Rekha", 45000.50);
    e1.display(); //Let's see if the name and salary are set to our object;
    /*
    So, this constructor internally works as! Well, it does...
    e1.name = "Rekha";
    e1.salary = 45000.50;
    */
    // Employee *e2 = new Employee; // This also produces error, guess why?
    // This works
    Employee *e2 = new Employee("Priya", 25000); // THis works same as above 
    e2->display();



    return 0;
}