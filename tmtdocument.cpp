#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k=0;
        int count = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                count++;
            }else{
                count--;
            }
            if(count<0){
                cout<<"NO"<<endl;
                k = -1;
                break;

            }
        }
        if(s[n-1]=='M'){
            cout<<"NO"<<endl;
            k = -1;
        }
        if(count==n/3&&k!=-1){
            cout<<"YES"<<endl;
        }else if(count!=n/3&&k!=-1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}