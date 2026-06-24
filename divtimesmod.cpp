#include<iostream>
using namespace std;

int main(){
    int x,k,n;
    int y;
    cin>>n>>k;
    for(int i = k-1;i>0;i--){
        if(n%i==0){
            y=i;
            break;
        }
    }
    int d = n/y;
    x=d*k+y;
    cout<<x<<endl;
    return 0;
}