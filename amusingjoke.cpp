#include<bits/stdc++.h>
using namespace std;int main(){string a,b,c;cin>>a>>b>>c;string x=a+b;sort(x.begin(),x.end());sort(c.begin(),c.end());cout<<(x==c?"YES":"NO")<<"\n";}
