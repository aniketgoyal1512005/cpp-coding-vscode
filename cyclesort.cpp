#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long k;
        cin >> n >> m >> k;

        int a[n], b[m];

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        long long lcm = (1LL * n * m) / gcd(n, m);

        long long limit = min(k, lcm);
        for (long long i = 0; i < limit; i++) {
            if (a[i % n] > b[i % m]) {
                swap(a[i % n], b[i % m]);
            }
        }

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;

        for (int i = 0; i < m; i++) cout << b[i] << " ";
        cout << endl;
    }
}
