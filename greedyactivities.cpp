#include <iostream>
using namespace std;

void merge(int finish[], int start[], int l, int m, int r){
    int n = r - l + 1;
    int tf[n];
    int ts[n];

    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r){
        if (finish[i] <= finish[j]) {
            tf[k] = finish[i];
            ts[k] = start[i];
            i++;
        } else {
            tf[k] = finish[j];
            ts[k] = start[j];
            j++;
        }
        k++;
    }

    while (i <= m){
        tf[k] = finish[i];
        ts[k] = start[i];
        i++; k++;
    }

    while (j <= r){
        tf[k] = finish[j];
        ts[k] = start[j];
        j++; k++;
    }

    for (i = l, k = 0; i <= r; i++, k++){
        finish[i] = tf[k];
        start[i] = ts[k];
    }
}

void mergeSort(int finish[], int start[], int l, int r) {
    if (l < r){
        int m = (l + r) / 2;
        mergeSort(finish, start, l, m);
        mergeSort(finish, start, m + 1, r);
        merge(finish, start, l, m, r);
    }
}

int main() {
    int n;
    cin>>n;

    int start[n], finish[n];
    for (int i = 0; i < n; i++){
        cin >> start[i];
    }
    for (int i = 0; i < n; i++){
        cin >> finish[i];
    }

    mergeSort(finish, start, 0, n - 1);

    int count = 1;
    int lastFinish = finish[0];

    cout << "Maximum number of activities = ";

    int selStart[n], selFinish[n];
    selStart[0] = start[0];
    selFinish[0] = finish[0];

    for (int i = 1; i < n; i++){
        if (start[i] >= lastFinish) {
            selStart[count] = start[i];
            selFinish[count] = finish[i];
            lastFinish = finish[i];
            count++;
        }
    }

    cout << count << endl;
    cout << "Selected activities: ";

    for (int i = 0; i < count; i++){
        cout << "(" << selStart[i] << ", " << selFinish[i] << ")";
        if (i != count - 1) cout << ", ";
    }

    return 0;
}
