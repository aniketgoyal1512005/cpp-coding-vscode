#include<iostream>
using namespace std;

int main(){
    int steps;
    cin >> steps;
    int k;
    int j = 0;
    cin>>k;
    int high = k;
    int low = k;
    for(int i = 1;i < steps; i++){
        int newval;
       cin >> newval;
       if(newval > high){
        high = newval;
        j++;
       }
       if(newval < low){
        low = newval;
        j++;
       }
       
    }
    cout << j <<endl;
    return 0;
}