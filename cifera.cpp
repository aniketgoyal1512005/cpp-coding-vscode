#include<iostream>
using namespace std;

int y = 0;
long long j;
long long k, l;

void rec(long long current, long long target) {
    if (current < target) {
        j = current * k;
        y++;
        rec(j, target);
    }
}

int main() {
    cin >> k >> l;
    j = k;

    rec(j, l);

    if (j == l) {
        cout << "YES" << endl;
        cout << y << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
