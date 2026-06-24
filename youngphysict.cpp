#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    int y[n];
    int z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int k = 0;
    int l=0;
    int o=0;
    for(int i=0;i<n;i++){
        k+=x[i];
        l+=y[i];
        o+=z[i];
    }
    if(k==0 && l==0 && o==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}