#include<Iostream>
using namespace std;

int main(){
    int k,w,n;
    cin>>k>>n>>w;
    int total=0;
    for(int i=0;i<w;i++){
        total+=(i+1)*k;
    }
    if(total>n){
        cout<<total-n;
    }
    else{
        cout<<0;
    }
}