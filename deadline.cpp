#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    char job[n];
    int deadline[n];
    int profit[n];

    for(int i = 0; i < n; i++){
        cin >> job[i];
    }
    for(int i = 0; i < n; i++){
        cin >> deadline[i];
    }
    for(int i = 0; i < n; i++){
        cin >> profit[i];
    }

    for(int i = 0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(profit[i] < profit[j]){
                swap(profit[i], profit[j]);
                swap(deadline[i], deadline[j]);
                swap(job[i], job[j]);
            }
        }
    }

    int maxDeadline = 0;
    for(int i = 0; i < n; i++){
        maxDeadline = max(maxDeadline, deadline[i]);
    }

    int slot[maxDeadline];
    char result[maxDeadline];

    for(int i = 0; i < maxDeadline; i++){
        slot[i] = -1;
    }

    int totalProfit = 0, count = 0;
    for(int i = 0; i < n; i++){
        for(int j = deadline[i] - 1; j >= 0; j--){
            if(slot[j] == -1){
                slot[j] = i;
                result[j] = job[i];
                totalProfit += profit[i];
                count++;
                break;
            }
        }
    }

    cout << "Selected Jobs: ";
    for(int i = 0; i < maxDeadline; i++){
        if(slot[i]!= -1)
            cout << result[i] << " ";
    }

    cout << "\nNumber of Jobs: " << count;
    cout << "\nMaximum Profit: " << totalProfit;

    return 0;
}
