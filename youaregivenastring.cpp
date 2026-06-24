#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int max=0;
    int count;
    for(int i = 0;i<s.length();i++){
        for(int j = i+1;j<s.length();j++){
            count=0;
            if(s[i]==s[j]){
               for(int k =0;k<s.length()-j;k++){
                     if(s[i+k]==s[j+k]){
                          count++;
                     }else{
                         break;
               } 
            }
            if(count>max){
                max=count;
            }
        }   
    }
}
    cout<<max;
    return 0;
}
