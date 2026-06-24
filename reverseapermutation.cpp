#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++) {

            int mx = p[i];
            int pos = i;
            for (int j = i; j < n; j++) {
                if (p[j] >= mx) {
                    mx = p[j];
                    pos = j;
                }
            }
            if (mx > p[i]) {
                int l = i, r = pos;
                while (l < r) {
                    int temp = p[l];
                    p[l] = p[r];
                    p[r] = temp;
                    l++;
                    r--;
                }
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
