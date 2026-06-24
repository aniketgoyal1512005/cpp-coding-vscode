#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            k=1;
            break;
        }
    }
    if(k==1){
        cout<<"HARD";
        return 0;
    }else{
        cout<<"EASY";
        return 0;
    }
}