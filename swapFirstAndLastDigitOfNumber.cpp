#include <iostream>
#include<cmath>
using namespace std;

int getLength(int);
int main() {
    int n, first, last, size,temp, result;
    cout<<"Enter a number: ";
    cin>>n;
    n = n;
    size = log10(n) + 1;
    // let's get first and last digit
    last = n%10;
    first = (int) n/pow(10, size-1);
 
    /// let's get the result
    result = last;
    n/=10;
    for(int i=2; i<size; i++) 
    {
        temp = (int) n/pow(10, size -i -1);
        int rem = temp%10;
        result = (result * 10) + rem;
    } 
    result = result*10 + first;
    cout<<"Result = "<<result<<endl;
    return 0;
}
