#include<iostream>
using namespace std;

int main(){
    int n;
    int x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string bit;
        cin >> bit;
        if(bit == "X++" || bit == "++X"){
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
