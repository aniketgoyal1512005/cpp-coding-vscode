#include<iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int a[n];
    int count=n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]>h){
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}