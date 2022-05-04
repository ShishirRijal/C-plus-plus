#include<iostream>
using namespace std;
int main() {
   string name = "Shishir", rev;
   int length = 0, i=0;
   char ch;
   while(name[i] != '\0') {
    length++;
    i++;
   }
   cout<<"Length = "<<length<<endl;
   for(int i= length -1 ; i>=0; i--) { //name.size() = length
    rev+=name[i];
   }
   cout<<rev;
    return 0;


}

