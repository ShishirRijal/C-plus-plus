#include <iostream>
using namespace std;

string findQuadrant(int a, int b);
int main() {
    int n1, n2;
    cout<<"Enter the coordinates: ";
    cin>>n1>>n2;
    cout<<findQuadrant(n1, n2)<<endl;
    return 0;
}

string findQuadrant(int n1, int n2) 
{
    if(n1==0 && n2 == 0) {
        return "It lies at origin. Quadrant undefined!";
    }
    bool isFirstPositive = n1>0;
    bool isSecondPositive = n2>0;
    if(isFirstPositive && isSecondPositive) {
        return "First Quadrant";
    }
    if(!isFirstPositive && isSecondPositive) {
        return "Second Quadrant";
    }
    if(isFirstPositive && !isSecondPositive) {
        return "Third Quadrant";
    }
    if(!isFirstPositive && !isSecondPositive) {
        return "Fourth Quadrant";
    }
    else {
        return "Illegeal Input";
    }
}
