#include<iostream>
using namespace std;
bool isPrime(int);
int main() {
    int n;
    cout<< "Enter a number: ";
    cin>> n;
   isPrime(n) ? cout<<"It is a prime number"<<endl : cout<<"It is not a prime number"<<endl;

    return 0;
}

bool isPrime(int n) {
    if(n==1) {
        return false;
    }
    for(int i=2; i<n/2; i++) 
    {
        if(n%i == 0) {
            return false;
        }

    }
    return true;

}