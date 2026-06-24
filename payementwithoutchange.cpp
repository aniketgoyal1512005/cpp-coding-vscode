#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int max_n_coins = min(a, s / n);
        int remaining = s - max_n_coins * n;

        if (remaining <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
