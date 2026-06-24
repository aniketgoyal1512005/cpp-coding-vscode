#include <iostream>
#include <algorithm>
using namespace std;

int freq[300005];
int dp[300005];

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int INF = 1000000000;

        for (int i = 1; i <= n; i++) {
            freq[i] = 0;
            dp[i] = INF;
        }

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x] = 1;
        }

        dp[1] = 0;

        for (int v = 1; v <= n; v++) {
            if (freq[v]) {
                for (int x = v; x <= n; x += v) {
                    if (dp[x / v] != INF) {
                        dp[x] = min(dp[x], dp[x / v] + 1);
                    }
                }
            }
        }

        for (int i = 1; i <= n; i++) {
    if (i == 1) {
        if (freq[1])
            cout << 1 << " ";
        else
            cout << -1 << " ";
    }
    else {
        if (dp[i] == INF)
            cout << -1 << " ";
        else
            cout << dp[i] << " ";
    }
}
cout << "\n";
    }

    return 0;
}
