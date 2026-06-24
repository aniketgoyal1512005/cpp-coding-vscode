#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum_p=((n/2)*(4+(n/2-1)*2))/2;
    long long sum_n=-1*(((n+1)/2)*(2+(((n+1)/2)-1)*2))/2;
    long long sum=sum_n+sum_p;
    cout<<sum;
    return 0;
}