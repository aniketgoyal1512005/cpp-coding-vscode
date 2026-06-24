#include<iostream>
using namespace std;
int t,n,a,b,i;
int main()
{
    for(cin>>t;t--;cout<<(a&1?"NO\n":"YES\n"))
        for(cin>>n,a=0,b=0;n--;cin>>i,i&1?++a:++b);
    return 0;
}
