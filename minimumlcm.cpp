#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while(b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int min_lcm = 1e9;
        int best_a = 0, best_b = 0;

        for(int j = max(1, n/2 - 100); j <= min(n-1, n/2 + 100); j++) {
            int a = j;
            int b = n - j;
            int g = gcd(a, b);
            int lcm = (a * b) / g;

            if(lcm < min_lcm) {
                min_lcm = lcm;
                best_a = a;
                best_b = b;
            }
        }

        cout << best_a << endl;
        cout << best_b << endl;
    }

    return 0;
}
