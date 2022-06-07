// Queue used the FIFO rule...

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> favNumbers;
    favNumbers.push(1);
    favNumbers.push(7);
    favNumbers.push(19);
    favNumbers.push(100);
    // so... let's go on :)
    cout << "I have " << favNumbers.size() << " favourite numbers." << endl;
    cout << "They are: " << endl;
    while (!favNumbers.empty())
    {
        cout << favNumbers.front() << " ";
        favNumbers.pop();
    }

    return 0;
}