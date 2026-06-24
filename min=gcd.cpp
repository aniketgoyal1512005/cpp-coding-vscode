#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min  = a[0];
        for(int i=1;i<n;i++){
            if(a[i]<min){
                min = a[i];
            }
        }
        int g = a[0];
        for(int i = 1;i<n;i++){
            g = gcd(g,a[i]);
        }
        if(min == g){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
}
}
return 0;
}