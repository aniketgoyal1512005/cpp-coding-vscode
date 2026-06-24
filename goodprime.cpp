#include<iostream>
using namespace std;

int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int k;
    cin>>k;
    int count=0;
    int i=0;
    while(k){
        if(isprime(++i)){
            string s = to_string(i);
            int sum=0;
            for(int j=0;j<s.size();j++){
                sum+=s[j];
            }
            if(isprime(sum)){
                k--;
                if(k==0){
                    cout<<i;
                }
            }
        }
    }
}