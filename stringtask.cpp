#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = tolower(s[i]);
        }

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||s[i]=='y'){

            s.erase(i,1);
        }

        else{
            s.insert(i,".");
        }
    }

    cout << s;
}