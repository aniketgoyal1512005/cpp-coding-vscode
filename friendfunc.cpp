#include<iostream>
using namespace std;
class c{
    private:
    int length;
    public:
    c(int l ):length(l){}
    friend class showlength;
};

class showlength{
    public:
    void cons(c &obj){
    cout<<"length : "<< obj.length;
}};



int main(){
    c a(5);
    showlength b;
    b.cons(a);
    return 0; 
}