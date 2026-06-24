#include<iostream>
using namespace std;

class parent{
public:
    int a;
};

class child1:protected parent{
public:
    void A(int val){
        a = val;
    }
    void show(){
        cout<<"Square: "<<a*a<<endl;
    }
};

class child2:protected parent{
public:
    void A(int val){
        a = val;
    }
    void show(){
        cout<<"Cube: "<<a*a*a<<endl;
    }
};

int main() {
    child1 obj1;
    child2 obj2;
    obj1.A(5);
    obj1.show();
    obj2.A(5);
    obj2.show();
}