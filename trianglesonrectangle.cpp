#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        int kh0, kh1, kv0, kv1;

        cin >> kh0;
        long long a1[kh0];
        for (int i = 0; i < kh0; i++) {
            cin >> a1[i];
        }

        cin >> kh1;
        long long a2[kh1];
        for (int i = 0; i < kh1; i++) {
            cin >> a2[i];
        }

        cin >> kv0;
        long long a3[kv0];
        for (int i = 0; i < kv0; i++) {
            cin >> a3[i];
        }

        cin >> kv1;
        long long a4[kv1];
        for (int i = 0; i < kv1; i++) {
            cin >> a4[i];
        }

        long long ans = max(
            max((a1[kh0 - 1] - a1[0]) * h,
                (a2[kh1 - 1] - a2[0]) * h),
            max((a3[kv0 - 1] - a3[0]) * w,
                (a4[kv1 - 1] - a4[0]) * w)
        );

        cout << ans << endl;
    }
}