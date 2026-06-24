#include<iostream>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long y = (k*(2*n-1-k)/2+(n-2*k)*k+(k)*(k-1)/2);
    if(n==1){
        cout<<0<<endl;
    }else if(k>n/2){
        cout<<(n)*(n-1)/2<<endl;
    }else{
        cout<<y<<endl;
    }
    return 0;
}