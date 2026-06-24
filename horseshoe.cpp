#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;;
    int count=0;
    cin>>a>>b>>c>>d;
    if(a==b){
        count++;
    }
    if(a==c){
        count++;
    }
    if(a==d){
        count++;
    }
    if(b==c&&a!=c){
        count++;
    }
    if(b==d&&a!=d){
        count++;
    }
    if(c==d&&a!=d&&b!=d){
        count++;
    }
    cout<<count;
    return 0;
}