
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> salary;
    map<string, int> helplineNumbers{{"Police", 100}, {"Ambulance", 101}};
    salary["Rupesh"] = 25000;
    salary["Visho"] = 13000;
    // access randomly
    cout << salary.at("Rupesh") << endl;
    cout << salary["Visho"] << endl;
    // adding more to the map
    salary.insert(pair<string, int>("Rishikesh", 15000));
    cout << "There are " << salary.size() << " interns" << endl;
    // let's print using an iterator
    map<string, int>::iterator p = salary.begin();
    while (p != salary.end())
    {
        cout << p->first << " => " << p->second << endl;
        p++;
    }
    cout << endl
         << "Printing helpline numbers" << endl;
    map<string, int>::iterator q = helplineNumbers.begin();
    while (q != salary.end())
    {
        cout << q->first << " => " << q->second << endl;
        q++;
    }

    return 0;
}