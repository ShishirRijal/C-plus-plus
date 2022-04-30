#include <iostream>
using namespace std;
void checkPrime(int n);

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    checkPrime(num);
    return 0;
}

void checkPrime(int num)
{
    if(num == 1)
    {
        cout<<"1 is neither prime nor .."<<endl;
        return;
    }
    for(int i=2; i<=num/2; i++)
        {
            if(num%i == 0)
            {
                cout<<num<<" is not a prime number;"<<endl;
                return;
            }
    }
    cout<<num<<" is a prime number."<<endl;
}