#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count++;
            }
        }
        cout<<s.size()-count<<endl;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                cout<<s[i];
                int j=s.size()-i-1;
                while(j--){
                    cout<<0;
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }
}