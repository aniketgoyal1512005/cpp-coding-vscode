#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }
    }
    if(count>n-count){
        cout<<"Anton";
    }else if(count>=n-count){
        cout<<"Friendship";
    }else{
        cout<<"Danik";
    }
    return 0;
}