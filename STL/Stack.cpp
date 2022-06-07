// Stack obeys LIFO rule..
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> boys;
    // let's add data to the stack
    boys.push("Rupesh");
    boys.push("Rishikesh");
    boys.push("Visho");
    // get the size
    cout << "The stack contains " << boys.size() << " boys" << endl;
    // let's get the elements at top and keep removing them..
    while (!boys.empty())
    {
        cout << boys.top() << endl;
        boys.pop();
    }
    return 0;
}