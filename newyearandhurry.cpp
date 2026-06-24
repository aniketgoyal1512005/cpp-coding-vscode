#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t=240-k;
    for(int i=1;i<=n;i++){
        if(t-5*i<0){
            cout<<i-1;
            return 0;
        }else{
            t=t-5*i;
        }
    }
    cout<<n;
}