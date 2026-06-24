#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a, b, x, y;
    cin >> a >> b >> x >> y;

    long long g = gcd(x, y);
    x /= g;
    y /= g;

    long long n = a / x;
    long long m = b / y;

    cout << min(n, m) << endl;
    return 0;
}
