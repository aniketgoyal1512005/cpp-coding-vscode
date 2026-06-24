#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n];
        int b[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        long long need[n + 1];
        need[0] = 0;
        for (int i = 1; i <= n; i++) {
            need[i] = need[i - 1] + b[i - 1];
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i];
            int cnt = n - i;

            int low = 0, high = n, best = 0;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (need[mid] <= cnt) {
                    best = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            long long score = x * best;
            if (score > ans) ans = score;
        }

        cout << ans << "\n";
    }

    return 0;
}
