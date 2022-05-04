#include<iostream>
using namespace std;
int main() {
    long long int factorial = 1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0 || n== 1) {
        factorial == 1;
    }
    else {
        for(int i=1; i<=n; i++) {
            factorial *= i;
        }
    }
    cout<<n<<"!"<< " => " << factorial;
    return 0;
}

