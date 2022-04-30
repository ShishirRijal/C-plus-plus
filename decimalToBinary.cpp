#include <iostream>
#include<cmath>
using namespace std;


int main() {
    int result=0, num, n, rem, temp = 1;
    cout<<"Please enter a decimal number: ";
    cin >> num;
    n = num;
    while(num > 0) 
    {
        rem = num % 2;
        result += (temp * rem);
        temp*=10;
        num /= 2; 
    }
    cout<<"The binary conversion of "<<n<<" is "<<result<<endl;
    return 0;
}