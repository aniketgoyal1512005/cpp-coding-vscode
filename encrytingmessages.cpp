#include<iostream>
using namespace std;

int main(){
    int n,m,c;
    cin>>n>>m>>c;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    for(int i = 0;i<=n-m;i++){
        for(int j=i;j<m+i;j++){
            a[j]=(a[j]+b[j-i])%c;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}