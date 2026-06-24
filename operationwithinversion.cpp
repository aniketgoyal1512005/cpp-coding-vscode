#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        int prev=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<prev){
                count++;
            }else{
                prev=arr[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}