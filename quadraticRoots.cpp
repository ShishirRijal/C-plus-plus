#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void findQuadraticRoots(int a, int b, int c);
int main() {
    int a, b, c;
   findQuadraticRoots(a,b,c);
    return 0;
}


void findQuadraticRoots(int a, int b, int c)
{
        cout << setprecision(2)<<fixed;
     double discriminant, r1, r2, img, real;
    cout<<"Enter the value of a, b and c from quadratic equation: ";
    cin>>a>>b>>c;
    discriminant = pow(b,2) - (4 * a * c);
    // equal roots
    if(discriminant == 0) 
    {
        r1 = -b/(2 * a);
        r2 = r1;
        cout<<"The equation has two equal roots i.e. "<<r1<<endl;
    }
    // real and unequal roots
   else if(discriminant > 0) 
    {
        r1 = ( -b + sqrt(discriminant) )/ (2 * a);
        r2 = ( -b - sqrt(discriminant) )/ (2 * a);
        cout<<"Root1 = "<< r1 <<" Root2 = "<< r2<<endl;;
    }   
    // imaginary roots
    else
    {
        real = -b/(2*a);
        img = sqrt(-discriminant)/(2*a);
        cout<<"Root1 = "<<real<<" + " <<img<<"i "<<"Root2 = "<<real<<" - "<<img <<"i"<<endl;
    } 
}