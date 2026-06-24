#include<iostream>
using namespace std;

int main(){
    int n;
    int a,b;
    cin>>n;
    int max=0;
    int prev=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        max=max-a+b;
        if(max>prev){
            prev=max;
        }
    }
    cout<<prev;
    return 0;
}