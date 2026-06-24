#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        int a[q];
        for (int i = 0; i < q; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++) {
            int count = 0;
            int j = 0;

            while (a[i] != 0) {
                if (s[j % n] == 'A') {
                    a[i]--;
                } else {
                    a[i] /= 2;
                }
                count++;
                j++;
            }

            cout << count << endl;
        }
    }

    return 0;
}
