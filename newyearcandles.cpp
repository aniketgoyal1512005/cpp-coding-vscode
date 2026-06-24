#include<iostream>
using namespace std;

void rec(int a, int b, int r, int count){
    if((a + r) / b > 0){
        count += (a + r) / b;
        int temp = (a + r) / b;
        r = (a + r) % b;
        rec(temp, b, r, count);
    }
    else{
        cout << count;
    }
}

int main(){
    int a, b;
    cin >> a >> b;

    int count = a;
    int r = 0;

    rec(a, b, r, count);
}