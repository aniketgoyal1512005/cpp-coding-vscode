#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k=0;
    for(int j=1;j<s.size();j++){
        if(s[j]>='a'&&s[j]<='z'){
            k=1;
            break;
        }
    }
    if(k==0){
        if(s[0]>='A'&&s[0]<='Z'){
    for(int i =0;i<s.size();i++){
            s[i]=tolower(s[i]);
        
    }
}else{
    for(int i=0;i<s.size();i++){
        if(i==0){
            s[i]=toupper(s[i]);
        }else{
             s[i]=tolower(s[i]);
        }
    }
}
}else{
    cout<<s;
    return 0;
}
    cout<<s;
    return 0;
}