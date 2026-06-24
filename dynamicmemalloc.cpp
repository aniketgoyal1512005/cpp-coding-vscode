#include <iostream>
using namespace std;
 
int main() {
    int* p = new int;
 
    cout<<"Enter a number: ";
    cin>>*p;
 
    cout<<"You entered: "<<*p<<endl;
 
    delete p;
 
    return 0;
}