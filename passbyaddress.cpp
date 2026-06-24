#include<iostream>
using namespace std;

class Class {
public:
    int obj;
};

Class c;

Class set(Class* objptr) {
    objptr->obj += 10;
    return *objptr;
}

int main() {
    cin >> c.obj;
    cout << "before modification: " << c.obj << endl;
    Class c1 = set(&c);
    cout << "after modification: " << c.obj << endl;
    return 0;
}
