#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            count++;
            i++;
        }
    }
    if(count%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
}
    }
}