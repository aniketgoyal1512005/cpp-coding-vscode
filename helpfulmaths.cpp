#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int j = 0; j < s.size(); j = j + 2){

        int min = int(s[j]);
        int k = j;

        for(int i = j + 2; i < s.size(); i = i + 2){

            if(int(s[i]) < min){
                min = int(s[i]);
                k = i;
            }
        }

        swap(s[j], s[k]);
    }

    cout << s << '\n';

    return 0;
}