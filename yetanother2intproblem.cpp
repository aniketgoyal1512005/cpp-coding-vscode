#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a, b, k;
        cin >> a >> b;
        if(a==b||abs(a-b)%10==0){
        int k= abs(a - b)/10 ;
        cout << k << endl;
        }else{
            int k = abs(a-b)/10  +1;
            cout << k << endl;
        }
        
    }
    return 0;
}
