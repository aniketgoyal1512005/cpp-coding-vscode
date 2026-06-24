#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s="";
while(n--){
 string q;
 cin>>q;
s = min(s+q,  q+s);}
cout<<s<<endl;
  }
}