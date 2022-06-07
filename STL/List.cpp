/*
    List is a bidirectional linear list..
    Unlike in vector, the elements can't be accessed randomly, but only in
    a sequentially..
*/

#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator p = l.begin();
    while (p != l.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

int main()
{
    list<int> nums{1, 34, 23, 76, 32, 5, 12, 67};
    // let's sort it
    nums.sort();
    // to print the elements of list, we need to iterate from one end
    display(nums);
    cout << endl;
    nums.push_back(13);
    nums.push_front(56);
    display(nums);
    nums.pop_back();
    nums.pop_front();
    nums.reverse();
    display(nums);
    nums.remove(12);
    cout << "There are " << nums.size() << " elements in the list." << endl;
    display(nums);
    return 0;
}