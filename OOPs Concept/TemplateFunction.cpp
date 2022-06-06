#include <iostream>
using namespace std;

template <class X>
X largest(X a, X b) {
    return a>=b? a: b;
}

int main() {
    cout<<largest(5, 67)<<endl;
    cout<<largest(12.56, 45.96)<<endl;


    return 0;
}