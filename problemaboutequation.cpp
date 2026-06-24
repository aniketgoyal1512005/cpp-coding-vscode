#include<iostream>
using namespace std;

int main(){
    int n;
    float b;
    int max = 0;
    cin>>n>>b;
    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];  
        if(max<arr[i]){
            max = arr[i];
        }
    }

}