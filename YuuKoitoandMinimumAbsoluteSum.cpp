#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 1;i<n-1;i++){
            if(a[i] == -1){
                a[i] = 0;
            }
        }
        if(a[0] == -1){
            a[0] = a[1];
        }
        if(a[n-1] == -1){
            a[n-1] = 0;
        }
        int sum = 0;
        for(int i=1;i<n;i++){
            sum = sum + (a[i]-a[i-1]);
        }
        cout<<abs(sum)<<endl;
        for(int i = 0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}