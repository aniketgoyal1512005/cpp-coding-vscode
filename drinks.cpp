#include<iostream>
using namespace std;

int main(){
    float n;
    cin>>n;
    float arr[int(n)];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float r=sum/n;
    cout<<r;
    return 0;
}