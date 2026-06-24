#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,a,b,k;
    for(int i = 0;i<t;i++){
        cin>>n>>a>>b;
        if(a>b){
            k = 1;
        }else{
            if(n>=a){
            if(n%a==0){
                k = n/a;
            }
            else{
                k= n/a +1;
            }
        }
        else{
            k = 1;
        }
        }
        cout<<k<<endl;
    }
    return 0;
}