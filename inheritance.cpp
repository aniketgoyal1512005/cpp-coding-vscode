#include<iostream>
using namespace std;

class parent{
    public:
    int a;

};
class parent2{
    public:
    int b;
};

class child:public parent, public parent2{
    public:
    void show(){
        cout<<a<<endl<<b;
    }
};
child obj;

int main(){
    obj.a=5;
    obj.b=10;
    obj.show();
}