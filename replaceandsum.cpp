#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        int a[200005], b[200005];
        long long c[200005], pref[200005];

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        c[n] = b[n];
        for (int i = n - 1; i >= 1; i--) {
            c[i] = max(c[i + 1], (long long)b[i]);
        }
        pref[0] = 0;
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + c[i];
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}
