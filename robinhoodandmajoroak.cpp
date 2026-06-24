#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for(long long i = 0;i<t;i++){
        long long sum=0,n,k;
        cin>>n>>k;
        for(long long j = n;j>n-k;j--){
            sum +=1LL*(j*j);
        }
        if(sum%2==0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;

}