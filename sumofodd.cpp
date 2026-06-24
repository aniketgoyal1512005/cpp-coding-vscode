#include<iostream>
using namespace std;

int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long diff = n-k*k;
        if(n>=k*k){
            if(diff%2==0){
            cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}