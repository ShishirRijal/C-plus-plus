#include <iostream>
using namespace std;
int getLength(int);
int main() {
    int num, length;
    cout<<"Enter a numnber: ";
    cin>> num;
    length = getLength(num);
    cout<<"There are "<<length<<" digits in "<<num<<endl;
    return 0;
}



int getLength(int num)
{
    int length = 0;
    while(num>0)
    {
        length++;
        num/=10;
    }
    return length;
}