#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int count=0;
    if(s.size()>=3){
    for(int i=1;i<s.size();i=i+3){
        int k=0;
        for(int j=1;j<s.size()&&j!=i;j=j+3){
            if(s[i]==s[j]){
                k=1;     
            }
        }
        if(k==0){
            count++;
        }
    }
}
    cout<<count;
    return 0;
}