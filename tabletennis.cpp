#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(k>n){
        sort(a,a+n);
        cout<<a[n-1];
        return 0;
    }
    int i=0;;
    while(true){
        int l=1;
        for(int j=1;j<=k;j++){
            if(a[i % n] <= a[(i+j)%n]&&(j!=i%n)){
                l=0;
            }

        }
        if(l==1){
            cout<<a[i%n];
            return 0;
        }
        i++;
    }
}