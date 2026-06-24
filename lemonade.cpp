#include <iostream>
#include <vector>
using namespace std;

bool canProvideChange(vector<int>& customerBills) {
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < customerBills.size(); i++) {
        if (customerBills[i] == 5) {
            count1++;
        } 
        else if (customerBills[i] == 10) {
            if (count1 >= 1) {
                count1--;
                count2++;
            } else {
                return false;
            }
        } 
        else if (customerBills[i] == 20) {
            if (count1 >= 3) {
                count1 -= 3;
            } 
            else if (count1 >= 1 && count2 >= 1) {
                count1--;
                count2--;
            } 
            else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> customerBills(n);
    for (int i = 0; i < n; i++) {
        cin >> customerBills[i];
    }

    if (canProvideChange(customerBills)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
