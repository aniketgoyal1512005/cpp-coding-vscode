#include<iostream>
using namespace std;
int main(){
    string k;
    int r;
    cin>>k>>r;
    int a=k[k.size()-1]-'0';

    for(int i=1;i<=10;i++){
        if((a*i)%10==r||(a*i)%10==0){
            cout<<i<<endl;
            break;
        }
    }
}