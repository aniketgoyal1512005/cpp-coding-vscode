#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(p==0){
                count++;
            }else{
                p--;
            }
        }else{
            p+=a[i];
        }
    }
    cout<<count;
}