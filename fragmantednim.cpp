#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int count = 0;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i] == 1){
                count++;
            }
            }
            if((count%2 == 1 &&(n)%2 == 1)||(count%2 == 0 &&(n)%2 == 0)){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
    }
    return 0;
}