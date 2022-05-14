///     COPY ASSIGNMENT OPERATOR  is used when the objects are already created in the memory and we have to copy the 
// one's properties to another.. So the constructor is not called during this operation..
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

    void display()
    {
        cout<<"Name = "<<name<<" Salary = "<<salary<<endl;
    }


};

int main() {

    Employee e1("Rekha", 45000.50);
    Employee e3("Binita", 25000.75);
    Employee *e2 = new Employee("Priya", 25000);
    Employee *e4 = new Employee("Bikash", 75000);
    //now after creating e3, if we want to copy e1 to e3 we use copy assignment operator
    e3 = e1;
    e3.display();
    *e4 = *e2; 
    e4->display();
    *e2 = e1;
    e2->display();
    e1 = *e4;
    e1.display();





    return 0;
}