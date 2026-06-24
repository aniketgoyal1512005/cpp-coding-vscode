#include <iostream>
#include <string>
using namespace std;

long long sumDigits(long long n) {
    long long s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;

        long long total = 0, digits = 1, start = 1;

        while (true) {
            long long count = 9 * start;
            long long len = count * digits;
            if (k > len) {
                long long end = start * 10 - 1;
                for (long long i = start; i <= end; i++) total += sumDigits(i);
                k -= len;
                start *= 10;
                digits++;
            } else break;
        }

        long long num = start;
        while (k > 0) {
            string s = to_string(num);
            for (int i = 0; i < s.size() && k > 0; i++) {
                total += (s[i] - '0');
                k--;
            }
            num++;
        }

        cout << total << "\n";
    }
}
