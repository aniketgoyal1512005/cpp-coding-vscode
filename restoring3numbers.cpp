#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    int a,b,c;
    c=arr[3]-arr[0];
    b=arr[3]-arr[1];
    a=arr[3]-arr[2];
    cout<<a<<" "<<b<<" "<<c;
}