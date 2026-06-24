#include<iostream>
using namespace std;

int main(){
    int k ,a,b;
    cin>>k>>a>>b;

    if((a/k==0&&b%k!=0)||(b/k==0&&a%k!=0)){
        cout<<"-1\n";

    }else{
        cout<<a/k+b/k<<endl;
    }
}