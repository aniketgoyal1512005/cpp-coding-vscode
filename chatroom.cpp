#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int k = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == 'h' && a == 0){
            a = 1;
        }

        else if(s[i] == 'e' && a == 1 && b == 0){
            b = 1;
        }

        else if(s[i] == 'l' && b == 1 && c == 0){
            c = 1;
        }

        else if(s[i] == 'l' && c == 1 && d == 0){
            d = 1;
        }

        else if(s[i] == 'o' && d == 1){
            e = 1;
            k = 1;
            break;
        }
    }

    if(k == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}