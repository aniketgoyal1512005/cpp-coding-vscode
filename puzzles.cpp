#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[k];
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    sort(a, a + k);

    int mn = 1000000000;

    for (int i = 0; i <= k - n; i++) {
        mn = min(mn, a[i + n - 1] - a[i]);
    }

    cout << mn;
    return 0;
}