/*
A tuple is an object that can hold a number of elements.
The elements can be of different data types.
*/

#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    // tuple initialization
    tuple<int, string, double> t1 = make_tuple(101, "Anjali Subedi", 75000.00);
    tuple<string, int, string> t2 = make_tuple("Tulsipur", 2001, "Software Engineer");
    // access the tuple members
    cout << get<1>(t1) << " earns " << get<2>(t1) << " a month." << endl;
    // sort and tie works exactly the same as in pair
    // tuple concatenation
    auto t3 = tuple_cat(t1, t2);
    cout << get<1>(t3) << " is a " << get<5>(t3) << " by profession." << endl;

    return 0;
}