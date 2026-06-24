#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int k=min(a,b);
    cout<<k<<" "<<max(0,(max(a,b)-k)/2);
}