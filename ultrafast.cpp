#include<iostream>
using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;

    string s2 = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s1[i]) {
            s2.push_back('0');
        } else {
            s2.push_back('1');
        }
    }

    cout << s2;

    return 0;
}