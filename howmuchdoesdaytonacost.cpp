#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k){
                p=1;
            }
        }
        if(p==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}