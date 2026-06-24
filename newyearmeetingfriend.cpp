#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max1=max(a,max(b,c));
    int min1=min(a,min(b,c));
    cout<<max1-min1<<endl;
    return 0;
}