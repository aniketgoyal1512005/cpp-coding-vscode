#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, i, k;
    string word;

    cin >> n;

    if(n < 1){
        return 0;
    }

    for(i = 1; i <= n; i++){
        cin >> word;
        k = word.length();

        if(k <= 10){
            cout << word << endl;
        }
        else{
            cout << word[0] << k - 2 << word[k - 1] << endl;
        }
    }

    return 0;
}
