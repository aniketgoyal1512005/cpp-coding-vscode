#include<iostream>
using namespace std;

int arr[100];
int top = -1;

void evaluate(string c, int k) {
    for (int i = 0; i < k; i++) {
        if(c[i]!='*'&&c[i]!='/'&&c[i]!='-'&&c[i]!='+') {
            top++;
            arr[top] = c[i] - '0';
        } 
        else {
            int d1 = arr[top]; top--;
            int d2 = arr[top]; top--;
            int n;

            if (c[i] == '*'){
                n = d2 * d1;
            }
            else if (c[i] == '/'){
                n = d2 / d1;
            }
            else if (c[i] == '-'){
                n = d2 - d1;
            }
            else if (c[i] == '+')
                n = d2 + d1;

            top++;
            arr[top] = n;
        }
    }
}

int main() {
    int k;
    string c;
    cout << "Enter total number of elements: ";
    cin >> k;
    cin >> c;

    evaluate(c, k);

    cout << "Result = " << arr[top] << endl;
    return 0;
}
