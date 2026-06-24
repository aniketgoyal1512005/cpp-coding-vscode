#include <iostream>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    long long k;
    k=(n-1)/a;
    long long r = (m-1)/a;
    cout<<(k+1)*(r+1);
    return 0;
    
}