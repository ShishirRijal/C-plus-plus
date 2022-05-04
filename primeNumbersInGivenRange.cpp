#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
    int n1, n2, i, j, counter=0, primes = 0;
    cout<<"Enter any two numbers: ";
    cin>>n1>>n2;
    for(i=n1; i<=n2; i++) 
    {
        for(j=2; j<=sqrt(i); j++) 
        {
            if(i%j==0) {
                counter++;
            }
        }
        if(counter==0 && i!=1) 
           {
               primes++;
                cout<<i<< "  ";
           }
           counter = 0;
    }
    cout<<"\nThere are "<<primes<<" prime numbers between "<< n1<<" and "<< n2<<endl;
    
    return 0;
}