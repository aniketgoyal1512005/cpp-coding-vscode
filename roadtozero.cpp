#include<iostream>
using namespace std;

int main(){
    long long x,y,a,b,t;
    long long result;
    int r1,r2,r3,r4;
    cin>>t;
    for(long long i = 0;i<t;i++){
    cin>>x>>y;
    cin>>a>>b;
    if(x>=y){
        r1 = a*(x-y)+b*y;
        r2 = a*(x-y)+a*y;

    }else{
        r1 = a*(y-x)+b*x;
        r2 = a*(y-x)+a*y;
    }
    if(r1>=0&&r2>=0){
    result = min(r1,r2);
    }else if(r1>=0){
        result = r1;
    }else if(r2>=0){
        result = r2;
    }

    cout<<result<<endl;
    }
    return  0;
}