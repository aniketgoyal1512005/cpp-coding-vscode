#include<iostream>
using namespace std;

class parent {
public:
    int a;
};

class child1 : public parent {
public:
    void show(){
        cout<<"Square: "<<a*a<<endl;
    }
};

class child2:public parent{
public:
    void show(){
        cout<<"Cube: "<<a*a*a<<endl;
    }
};

int main() {
    child1 obj1;
    child2 obj2;
    obj1.a = 5;
    obj2.a = 5;
    obj1.show();
    obj2.show();
}