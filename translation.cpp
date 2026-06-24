#include<Iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return 0;
    }
    int k=1;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[s2.size()-1-i]){
            k=0;
            break;
        }
    }
    if(k==0){
        cout<<"NO";
    }else{cout<<"YES";}
    return 0;
}