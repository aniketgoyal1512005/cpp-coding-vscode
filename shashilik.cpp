#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        int count = 0;

        if (x <= y) {
            if (k >= a) {
                int times = (k - a) / x + 1;
                count += times;
                k -= times * x;
            }
            if (k >= b) {
                int times = (k - b) / y + 1;
                count += times;
                k -= times * y;
            }
        } else {
            if (k >= b) {
                int times = (k - b) / y + 1;
                count += times;
                k -= times * y;
            }
            if (k >= a) {
                int times = (k - a) / x + 1;
                count += times;
                k -= times * x;
            }
        }

        cout << count << endl;
    }
}
