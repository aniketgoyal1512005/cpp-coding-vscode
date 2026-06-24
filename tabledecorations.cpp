#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long r,b,g;
    cin>>r>>b>>g;
    long long max_i=max(r,max(b,g));
    long long min_i=min(r,min(b,g));
    if(max_i>=2*(r+b+g-max_i)){
        cout<<(r+b+g-max_i);
    }else{
        cout<<(r+b+g)/3;
    }

    }