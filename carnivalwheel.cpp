#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = 0;
        }

        int maxIndex = 0;
        int i = 0;

        while (true) {
            int idx = (a + b * i) % n;

            if (arr[idx] == -1) {
                cout << maxIndex << endl;
                break;
            }

            arr[idx] = -1;
            if (idx > maxIndex) {
                maxIndex = idx;
            }

            i++;
        }
    }
    return 0;
}
