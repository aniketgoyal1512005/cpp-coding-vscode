#include<iostream>
using namespace std;

int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}

int main(){
    int w,h,d;
    cin>>w>>h>>d;

    int n;
    long long k,l,m;
    cin>>n;

    k=hcf(n,w);
    l=hcf(n/k,h);
    m=hcf(n/(k*l),d);

    if(k*l*m!=n){
        cout<<-1<<endl;
        return 0;
    }

    cout<<k-1<<" "<<l-1<<" "<<m-1<<endl;

    return 0;
}