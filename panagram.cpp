#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool arr[26] = {0};

    for(int i = 0; i < n; i++){
        char ch = tolower(s[i]);
        arr[ch - 'a'] = true;
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] == false){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}