/*
By defining the template class, we can avoid defining similar class with 
same logics, but only with different data types........
*/
#include <iostream>
using namespace std;

template <class T1, class T2>
class Employee {
    private: 
    T1 id;
    T2 salary;
    string name;
    public:
    Employee(T1 id, string name,  T2 salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    T1 getId() {
        return id;
    }
    T2 getSalary() {
        return salary;
    }
    void display() {
        cout<<"Name = "<<this->name<<endl<<"ID = "<<this->id<<endl<<"Salary = "<<this->salary<<endl<<endl;
    }
};

int main() {
    Employee<int, double> e1(234,"Anthony Porter", 45000.75);
    Employee<string, int> e2("LSPPD16", "Leap Frog", 75000);
    e1.display();
    e2.display();
    


    return 0;
}