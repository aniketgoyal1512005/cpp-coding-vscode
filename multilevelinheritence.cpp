#include<iostream>
using namespace std;

class grandparent {
public:
    int a;
};

class parent : public grandparent {
public:
    int b;
};

class child : public parent {
public:
    void show() {
        cout << a << endl << b;
    }
};

child obj;

int main() {
    obj.a = 5;
    obj.b = 10;
    obj.show();
}