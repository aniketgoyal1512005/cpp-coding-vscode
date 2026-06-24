#include <iostream>
using namespace std;

int type4(int a, int b, int count, int t4);
int type3(int a, int b, int count, int t2, int t3, int t4);
int type2(int a, int b, int count, int t2, int t3, int t4);

/* TYPE 2 */
int type2(int a, int b, int count, int t2, int t3, int t4) {
    if ((t2 == 0 && t3 == 0 && t4 == 0) || a == -1 || b == -1)
        return count;

    while (b >= 0 && t2 > 0) {
        b--; a++; t2--; count++;
        if (a == -1 || b == -1) return count;
    }

    if (t2 == 0 && t3 == 0)
        return type4(a, b, count, t4);

    return type3(a, b, count, t2, t3, t4);
}

/* TYPE 3 */
int type3(int a, int b, int count, int t2, int t3, int t4) {
    if ((t2 == 0 && t3 == 0 && t4 == 0) || a == -1 || b == -1)
        return count;

    while (a >= 0 && t3 > 0) {
        a--; b++; t3--; count++;
        if (a == -1 || b == -1) return count;
    }

    if (t2 == 0 && t3 == 0)
        return type4(a, b, count, t4);

    return type2(a, b, count, t2, t3, t4);
}

/* TYPE 4 */
int type4(int a, int b, int count, int t4) {
    if (t4 == 0 || a == -1 || b == -1)
        return count;

    while (a >= 0 && b >= 0 && t4 > 0) {
        a--; b--; t4--; count++;
        if (a == -1 || b == -1) return count;
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int t1, t2, t3, t4;
        cin >> t1 >> t2 >> t3 >> t4;

        int a = t1, b = t1, count = t1;
        int ans = count;

        // Start from TYPE 2
        ans = max(ans, type2(a, b, count, t2, t3, t4));

        // Start from TYPE 3
        ans = max(ans, type3(a, b, count, t2, t3, t4));

        // Start from TYPE 4
        ans = max(ans, type4(a, b, count, t4));

        cout << ans << endl;
    }
    return 0;
}
