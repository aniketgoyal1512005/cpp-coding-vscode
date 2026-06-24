#include<iostream>
#include<algorithm>
using namespace std; 
 
 int main(){
 int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int g[n];
        int s[m];
        for(int i  = 0;i<n;i++){
            cin>>g[i];
        }
        for(int i = 0;i<m;i++){
            cin>>s[i];
        }
        sort(g,g+n);
        sort(s,s+m);
        int count=0;
        int i = n-1,j=m-1;
        while(i>=0&&j>=0){
            if(g[i]<=s[j]){
                count++;
                i--;
                j--;
            }else{
                i--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}