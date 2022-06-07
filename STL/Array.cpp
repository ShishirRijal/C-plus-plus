/*
    The array container in STL provides us with the
    implementation of static array.
    SYNTAX:
    array<object_type, arr_size> arr_name;
*/

#include <iostream>
#include <array>
#include <cstring>
using namespace std;
int main()
{
    // Declaration and initialization of array
    array<int, 5> prime = {2, 3, 5, 7, 11};
    array<int, 5> even = {2, 4, 6, 8, 10};
    array<int, 3> odd = {1, 3, 5};
    array<string, 3> pets = {"Dog", "Panda", "Dolphin"};

    // [] and at() -> Access elements at particular index...
    cout << prime.at(0) << endl;
    cout << pets[0] << endl;
    // front() & back() -> get first and last element of array
    cout << even.front() << endl;
    cout << pets.back() << endl;
    // swap() -> swap the elements of two arrays..
    // Note that two arrays must be of same type and size..
    // prime.swap(pets); // no known conversion error
    // prime.swap(odd); // error
    prime.swap(even); // it's a valid one
    // size()  -> get the size/length of array
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
    cout << endl;
    // Above code printed even numbers.. So the swap() worked..
    // let's undo the change
    even.swap(prime);
    // empty() -> check whether the array(its size) is empty or not
    array<int, 0> a{};
    cout << boolalpha << a.empty() << endl; // true
    array<int, 1> b;
    cout << boolalpha << b.empty() << endl; // false
    // fill() -> fill entire array with a value
    odd.fill(19);
    for (int i = 0; i < odd.size(); i++)
    {
        cout << odd.at(i) << " ";
    }
    cout << endl;
    // Output : 19 19 19
    // sizeof() -> get the size of array in bytes
    cout << sizeof(prime) << endl; // 20
    // data() -> returns the base address of array
    cout << even.data() << endl;
    const char *name = "Shishir";
    array<char, 8> me;
    memcpy(me.data(), name, 8);
    cout << me.data() << endl;
    return 0;
}
