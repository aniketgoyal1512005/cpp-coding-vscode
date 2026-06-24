#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int values[n];
    int weights[n];

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int W;
    cin >> W;

    float ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = (float)values[i] / weights[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(values[i], values[j]);
                swap(weights[i], weights[j]);
            }
        }
    }

    float maxValue = 0;

    for (int i = 0; i < n; i++) {
        if (W == 0)
            break;

        if (weights[i] <= W) {
            maxValue += values[i];
            W -= weights[i];
        } else {
            maxValue += ratio[i] * W;
            W = 0;
        }
    }

    cout << "Maximum value = " << maxValue << endl;

    return 0;
}
