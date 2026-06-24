#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    long long score = 0;

    while(n > 1){

        sort(arr, arr + n);

        int k = arr[n-1] - arr[0];

        score += k;

        arr[0] = k;

        for(int i=1;i<n-1;i++){
            arr[i] = arr[i];
        }

        n--;
    }

    cout << score;

    return 0;
}