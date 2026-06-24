#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}