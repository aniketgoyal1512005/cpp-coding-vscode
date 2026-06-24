#include <cmath>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
        }else if(arr[i]==2){
            b++;
        }else if(arr[i]==3){
            c++;
        }else{
            d++;
        }
    }
    int count=d+c+ceil(float(a-min(a,c)+2*b)/4);
    cout<<count;
    return 0;
}