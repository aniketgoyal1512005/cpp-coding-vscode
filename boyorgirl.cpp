#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count =s.size();
    for(int i=0;i<s.size();i++){
        int check=0;
        for(int j= i-1;j>=0;j--){
            if(s[i]==s[j]){
                check=1;
                
            }
        }
        if(check==1){
            count--;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}