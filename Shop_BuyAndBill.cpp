/*
7.	Create a class Customer with attributes customer name, product bought and paid amount.
Create suitable methods to take and display the information with a clause that if amount
paid is greater than 20000 then a discount of 5% given else no discount is granted.
*/

#include <iostream>
using namespace std;

class Customer
{
    string name;
    string product;
    int amount;

public:
    Customer(string name)
    {
        this->name = name;
        product = "";
        amount = 0;
    }
    void Shop()
    {
        cout << "Enter product: ";
        cin >> product;
        cout << "Enter amount: ";
        cin >> amount;
    }
    void bill()
    {
        if (amount > 20000)
            cout << "Bill = " << amount * 0.95 << endl;
        else
            cout << "Bill = " << amount << endl;
    }
};

int main()
{
    Customer c("Roshan");
    c.Shop();
    c.bill();

    return 0;
}