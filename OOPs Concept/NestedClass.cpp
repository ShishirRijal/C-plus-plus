#include<iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;
    class DateOfBirth {
        private:
        int year;
        int month;
        int day;
        public:
        void setDateOfBirth(int year, int month, int day) 
        {
            this->year = year;
            this->month = month;
            this->day = day;
        } 
        void displayDateOfBirth()
        {
            cout<<this->year<<"/"<<this->month<<"/"<<this->day<<endl;
        }
    };
    DateOfBirth dob; //memory allocated for dob
    public: 
    void setData(string name, int age, int year, int month, int day) {
        this->name = name;
        this->age = age;
        dob.setDateOfBirth(year, month, day);
    }
    void display() {
        cout<<"Name: "<<this->name<<endl<<"Age: "<<this->age<<endl<<"Date of birth: ";
        dob.displayDateOfBirth();
    }
};


int main() 
{
    Person p;
    p.setData("Rishikesh Upadhyay", 20, 2058,5,14);
    p.display();

    return 0;
}