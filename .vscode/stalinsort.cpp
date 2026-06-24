#include<iostream>
using namespace std;

void deleteele(int arr[],int n,int k){
    for(int i=k;i<n-1;i++){
        arr[i]=arr[i+1];

    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int p = 0;
        
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 1;i<n;i++){
            if(a[i]<a[i-1]){
                deleteele(a,n,i);
                n--;
                i--;
                p++;
            }
        }
        cout<<p<<endl;
    }
}