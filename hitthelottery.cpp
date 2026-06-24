#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    int count=0;
    count+=k/100;
    k=k%100;
    count+=k/20;
    k=k%20;
    count+=k/10;
    k=k%10;
    count+=k/5;
    k=k%5;
    count+=k/1;
    cout<<count;
    return 0;

}