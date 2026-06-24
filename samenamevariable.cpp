#include<iostream>
using namespace std;

int x = 1;

class C {
    public: 
    static int x ;

};
int C::x = 2;
C c;
int main(){
    int x =3;
    cout<<::x<<endl;
    cout<<C::x<<endl;
    cout<<x<<endl;

    return 0;
}