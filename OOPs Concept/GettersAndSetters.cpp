#include <iostream>
using namespace std;

class Employee {
    private: // so, we can access the member variables only inside the same class
    string name;
    double salary;

    // Since we can't directly access the member varibles of this class outside the class, we
    // need setter to set value and getter to get value;
    //setter
    public:  // since the getters and setters are now public, we can access them outside class
    void setName(string employeeName ) {
        name = employeeName;
    }
    void setSalary(double employeeSalary)
    {
        salary = employeeSalary;
    }
    //getter
    string getName() {
        return name;
    }
    double getSalary(){
        return salary;
    }

};

int main() {
    //Let's create two objects
    Employee e1;
    Employee *e2 = new Employee;
    //Now we use setters to set the value of member variables and 
    // getters to get the values of particular member variables
    // e1.name = "Shishir"; // This will produce an error as the name is a private property of 
    // or, e2->name ="Rupesh";  // employee class and can't be accessed outside the class
    // So, instead, let's so like this
    e1.setName("Shishir Rijal");
    e1.setSalary(150000);
    e2->setName("Rupesh Dangi");
    e2->setSalary(130000);
    // Now let's access the values...
    cout<<e1.getName()<<" earns Rs."<<e1.getSalary()<<" per month"<<endl;
    cout<<e2->getName()<<" earns Rs."<<e2->getSalary()<<" per month"<<endl;

    return 0;
}
// So why should be we getters and setters...
/*
In this way, we can both set the values of instance of objects and get those values using setters and
getters respectively. But, the question is, if we still can have access to them, why declare them as the
private properties??
Well, though we can't directly access the properties of objects from anywhere outside the class. This
prevents any unwanted and misleading updates to our properties.
Also, by using setters we can control the update of our variables. For eg, we can only set that value to
the variable if certain conditions meet. Like, 
void setName(string myName, string passcode) {
    if(passcode != 123)
        return;
    if(myName.length < 4)
        return;
    name = myName; 
    By doing so, we set the contraints to set the name of object. The name will only be set, if admin 
    tries to set the name(password needed), and the name must have atleast 4 charactes.
    
}

*/