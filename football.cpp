#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count1=0;
    int count0=0;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='0'){
            count1=0;
            count0++;
            if(count0==7){
                cout<<"YES";
                return 0;
            }
        }else{
            count0=0;
            count1++;
            if(count1==7){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}