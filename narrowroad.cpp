#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] = arr[i] - i - 1;

        if(i>0 && arr[i] <= arr[i-1]){
            arr[i] = arr[i-1] + 1;
        }
        cout << arr[i] << endl;
    }
    return 0;
}
