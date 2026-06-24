#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int arr[n];
        int sure=0;
        for(int j=0;j<3;j++){
            cin>>arr[j];
            if(arr[j]==1){
                sure++;
            }
        }
        if(sure>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}