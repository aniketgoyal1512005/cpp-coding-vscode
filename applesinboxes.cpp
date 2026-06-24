#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long y = 0;  // global move counter across ALL test cases

    while (t--) {
        int n, k;
        cin >> n >> k;
        long long arr[100000];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long mn = *min_element(arr, arr + n);
        long long mx = *max_element(arr, arr + n);

        // If already invalid before first move -> Tom loses immediately
        if (mx - mn > k) {
            cout << "Jerry" << endl;
            continue;
        }

        // Otherwise, game goes until all apples removed
        long long sum = 0;
        for (int i = 0; i < n; i++) sum += arr[i];
        y += sum;  // total moves = sum of apples, add to global counter

        // Winner depends on parity of y
        if (y % 2 == 0) cout << "Jerry" << endl;
        else cout << "Tom" << endl;
    }

    return 0;
}
