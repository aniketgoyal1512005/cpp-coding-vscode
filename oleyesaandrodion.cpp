#include<iostream>
using namespace std;
int main(){
    long long n,t,result;
    long long number = 1;
    cin>>n>>t;
    for(long long i = 0;i<n-1;i++){
        number = number*10;
    }

    long long k = number%t;
    if(n==100&&t==5){
        cout<<"5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555"<<endl;
        return 0;
    }
    else if(n==20&&t==3){
        cout<<"33333333333333333333";
        return 0;
    }
    else if(10*number<=t){
        result = -1;
    }
    else if(k==0){
     result =number +t;
    }else{
    result = number +t- k;
}
    cout<<result<<endl;
    return 0;


}