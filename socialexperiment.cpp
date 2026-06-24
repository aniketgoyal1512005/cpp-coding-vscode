#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      int k = n%4;
      if(n==2){
        cout<<"2"<<endl;
      }
      else if(n==3){
        cout<<"3"<<endl;
      }
      else if(k==0||k==2){
        cout<<"0"<<endl;
      }else{
        cout<<"1"<<endl;
      }
    }
}