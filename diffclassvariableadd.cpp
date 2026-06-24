#include<iostream>
using namespace std;

class an;

class c {
private:
    int length;
public:
    c(int l){
        length = l;
    }
    friend void showlength(c a, an q);
};
class an {
private:
    int breath;
public:
    an(int b){
        breath = b;
    }
    friend void showlength(c a, an q);
};
void showlength(c a, an q) {
    int sum = a.length + q.breath;
    cout<<"Sum = "<<sum<<endl;
}
    int main() {
        c a(5);
        an q(10);
        showlength(a, q);
        return 0;
}
