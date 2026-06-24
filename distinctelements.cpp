#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int inc = 2;
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        cout<<"1"<<endl;
        for(int i = 1;i<n;i++){
            if(a[i]-a[i-1]==inc){
                cout<<inc<<endl;
                inc++;
            }else{
                cout<<"1"<<endl;
            }
        }
    }
    return 0;
}