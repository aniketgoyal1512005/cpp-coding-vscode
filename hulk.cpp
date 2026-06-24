#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(i==n-1){
            cout<<"I hate it ";
            }else{
                cout<<"I hate that ";
            }
        }else{
            if(i==n-1){
            cout<<"I love it ";
            }else{
                cout<<"I love that ";
            }
        }
    }
    return 0;
}