#include<iostream>
using namespace std;

int main(){
    int t;int k = 1;

    cin >> t;

    if(t%2 == 1){
        cout << "NO\n";
        return 0;
    }else{
        string s;
        int count=0;
            cin >> s;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                count--;
            }else{
                count++;
            }
            if(count<-1){
                k=0;
                cout << "NO\n";
                return 0;
            }}
        
        if(count==0 && k==1){
            cout << "YES\n";
    }else{
        cout << "NO\n";
}
}
}