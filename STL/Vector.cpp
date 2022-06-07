#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prime{2, 3, 5, 7, 11};
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime.at(i) << " ";
    }
    cout << endl;
    // create vector of size 5 and initialize each to 0
    vector<int> nums(5, 0);
    // add element to end of vector
    prime.push_back(13);
    // begin() -> Returns an iterator pointing to the first element in the vector
    cout << *(prime.begin()) << endl;
    // end() -> returns the address of the last+1 element of vector
    cout << *(prime.end() - 1) << endl;
    // printing from beginning to the last
    cout << "Printing from beginning to the last..." << endl;
    for (auto i = prime.begin(); i != prime.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "Printin from the last to the first" << endl;
    for (auto i = prime.rbegin(); i != prime.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
