#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    int min=0;
    int max=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]>arr[max]){
            max=i;
        }

        if(arr[i]<=arr[min]){
            min=i;
        }
    }

    int time;

    if(max > min){
        time = max + (n-1-min) - 1;
    }
    else{
        time = max + (n-1-min);
    }

    cout<<time;
}