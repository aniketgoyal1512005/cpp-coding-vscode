#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;

        for (int k = 1; k <= 18; k++) {
            long long d = 1;
            for (int i = 0; i < k; i++){
                d*= 10;
            }
            d += 1;

            if (n % d == 0) {
                ans.push_back(n / d);
            }
        }

        if (ans.empty()) {
            cout << 0 << endl;
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << " ";
            for (auto x : ans) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
