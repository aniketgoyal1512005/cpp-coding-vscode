#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int p;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i+1==k){
            p=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=p && arr[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;

}