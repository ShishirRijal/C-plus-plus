#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int units, id;
    double rate, amount, surcharge = 0;
    string name;
    cout<<"Enter the the costumer id: ";
    cin>>id;
    cout<<"Enter the customer name: ";
    cin>>name;
    cout<<"Enter the units conusmed: ";
    cin>>units;
    // so, what's the rate??
    if(units < 200) // 0 to 199
        rate = 1.2;
    else if(units < 400)
        rate  = 1.5;
    else if(units < 600)
        rate = 1.8;
    else 
        rate = 2;
    // what's the bill amount then?
    amount = rate * units;
    // let's check the amount
    if(amount < 100)
    {
        amount = 100;
    }
    else if(amount > 400)
    {
        surcharge = 0.15 * amount;
    }
    // So, let's print the bill now
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Costumer ID: "<< id<<endl;
    cout<<"Customer name: " <<name<<endl;
    cout<<"Units consumed: "<<units<<endl;
    cout<<"Amount charges @ Rs."<<rate<<" per unit: Rs."<<amount<<endl;
    cout<<"Surcharge amount: Rs."<<surcharge<<endl;
    cout<<setprecision(2)<<fixed<<"Net amount paid by costumer: Rs. "<< surcharge + amount<<endl;
    return 0;
}