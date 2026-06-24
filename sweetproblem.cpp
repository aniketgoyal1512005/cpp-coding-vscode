#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, b, g;
        cin >> r >> b >> g;
        int sum = r + b + g;
        int mx = max({r, b, g});
        int result = min(sum - mx, sum / 2);
        cout << result <<endl; 
    }
    return 0;
}
