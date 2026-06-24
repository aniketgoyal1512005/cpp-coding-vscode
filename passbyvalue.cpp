#include<iostream>
using namespace std;

class Class {
public:
    int obj;
};

void set(Class &c) {
    c.obj = c.obj + 5;
}

int main() {
    Class c; 
    cin >> c.obj;

    cout << "before modification: " << c.obj << endl;
    
    set(c);
    
    cout << "after modification: " << c.obj << endl;

    return 0;
}
