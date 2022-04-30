// Swap the values stored in two variables without the use of third variable

#include <iostream>
using namespace std;
int main() {
    int n1 = 5, n2 = 10;
    cout<<"Before variable swap"<<endl;
    cout<<"n1 = "<<n1<<" n2 = "<<n2<<endl;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout<<"After variable swap"<<endl;
    cout<<"n1 = "<<n1<<" n2 = "<<n2<<endl;
    return 0;
}