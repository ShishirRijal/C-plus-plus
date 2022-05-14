#include <iostream>
using namespace std;

class Employee {
    private: 
    string name;
    double salary;

   public:
   // Constructor
   Employee(string employeeName, double employeeSalary){
       name = employeeName;
       salary = employeeSalary;
   }
   // Destructor
   /*
       Destructor has same name as that of class with ~ at beginning. Default destructor has no argument
       and no return type. As like constructor, it is called only once in the life time of object 
       while it's scope is finished to deallocate the memory.
   */
   ~Employee() {
    cout<<"Destructor called"<<endl;
   }

    void display()
    {
        cout<<"Name = "<<name<<" Salary = "<<salary<<endl;
    }




};

int main() {
    Employee e1("Ram", 12000);
    Employee *e3 = new Employee("Bipin", 78050); // Desctructor is not called for this one
    /*
    Here the destructor is automatically called for e1 when it goes out of the scope but not for e3, why?
    It is because e1 is created in the stack memory, so whenever e1 goes out of scope, desctuctor is
    called automatically to free it's memory. But, the object reference by e3 is created in heap memory 
    and the heap memory is to be created and deleted explicityly. Also, e3 is a normal pointer varible
    and we know that the destructor doesn't run to deallocate the normal pointer variable.
    So we need to explicitly delete object e3. This can be done as
    delete e3;

    */
   delete e3; // destructor runs for e3 now

    return 0;
}