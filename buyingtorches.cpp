#include<iostream>
using namespace std;

int main (){
    long long n,steps;
    cin>>n;
    for(int i = 0;i<n;i++){
        long long x,y,k;
        cin>>x>>y>>k;
        steps = (k*(y+1)+x-3)/(x-1) + k;
        cout<<steps<<endl;
    }
    return 0;

}