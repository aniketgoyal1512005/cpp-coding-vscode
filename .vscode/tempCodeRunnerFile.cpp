#include<iostream>
using namespace std;

int rec(int a,int b,int r,int count){
    if((a+r)/b>0){
        count+=(a+r)/b;
        r=(a+r)%b;
        rec((a/b+r),b,r,count);
    }else{
        cout<<count;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int count=a;
    int r=0;
    rec(a,b,r,count);
}