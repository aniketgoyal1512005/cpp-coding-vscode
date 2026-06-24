#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    int count=0;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}