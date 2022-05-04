#include<iostream>
#include<math.h>
using namespace std;
void isPalindrome(int a);
int findReverse(int n);
int main() {
    int num, rev;
    cout<<"Enter a number: ";
    cin>>num;
    isPalindrome(num);


    return 0;
}

int findReverse(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        int digits = (int) log10(n);  // one less the no. of digits in number
        return ((n%10 * pow(10, digits)) + findReverse(n/10));
    }
}

void isPalindrome(int n) {
    if( (n) == findReverse(n) )
        {
            cout<<n<< " is a palindrome number";
        }
        else
        {
            cout<<n<<" is not a palindrome number";
        }
}
