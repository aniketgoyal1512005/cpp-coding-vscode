#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter length: ";
    cin >> n;

    char a[100];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int t;
    for (int i = 1;i<n-1;i++){
        if (a[i] == '*'){
            if (a[i + 1]!= '('&&a[i - 1]!= ')') {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                i++;
            }
        }
        else if (a[i] == '/') {
            if (a[i + 1] != '(' && a[i - 1] != ')') {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                i++;
            }
        }
    }

    for (int i = 1; i < n - 2; i++){
        if (a[i] == '+' || a[i] == '-'){
            if (a[i + 1] != '(' && a[i - 1] != ')'){
                if (a[i + 2] == '*' || a[i + 2] == '/'){
                    if (a[i + 2] != '('){
                        t = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = t;

                        t = a[i + 1];
                        a[i + 1] = a[i + 2];
                        a[i + 2] = t;
                    }
                } else{
                    t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}