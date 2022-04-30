#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>=48 && ch<=57)
        cout<<ch<<" is a digit."<<endl;
    else if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
        cout<<ch<<" is an alphabet."<<endl;
    else 
        cout<<ch<<" is a special character."<<endl;

    //
    return 0;
}