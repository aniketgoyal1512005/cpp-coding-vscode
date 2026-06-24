#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string a, b, c;
        
        cin >> n >> a;
        cin >> m >> b;
        cin >> c;

        string front = "", back = "";

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V' || c[i] == 'v') {
                front = b[i] + front;
            } else {
                back += b[i];
            }
        }

        cout << front + a + back << endl;
    }

    return 0;
}
