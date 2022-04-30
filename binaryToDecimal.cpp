#include <iostream>
#include<cmath>
using namespace std;


int main() {
    int num, result = 0, rem, n, temp = 0;
    cout<<"Enter a binary number: ";
    cin>>num;
    n = num;
    while(num > 0)
    {
        
        rem = num % 2;
        result += (rem * pow(2, temp));
        temp ++;
        num /= 10;
    }
    cout<<"The decimal conversion of "<<n<<" is "<<result<<endl;
    return 0;
}