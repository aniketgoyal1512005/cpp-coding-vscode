#include<iostream>
using namespace std;
class c{
    private:
    int length;
    int breath;
    public:
    c(int l ,int b){
        length = l;
        breath = b;
    }
    friend class showlength;
};

class showlength{
    public:
    void cons(c &obj){
    cout<<"length : "<< obj.breath<<endl;
    cout<<"breath is: "<<obj.length<<endl;
}};



int main(){
    c a(5,10);
    showlength b;
    b.cons(a);
    return 0; 
}