#include<iostream>
using namespace std;

int main(){
    int t ;
    cin>>t;
    for(int i = 0;i<t;i++){
        int n;
        int k = 1,r=1;
        cin>>n;
        for(int j = 1;j<=n;j++){
            k=k*10;
            r=r*2;
        }
        int s = k-1;
        int y = s%r;
        int result  = s-y;
        cout<<result<<endl;
    }
    return 0;
}