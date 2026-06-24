#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    int a[n + 2];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    a[0] = 0;
    a[n + 1] = l;

    sort(a, a + n + 2);

    a[0] = -a[1];
    a[n + 1] = 2 * l - a[n];

    double mx = 0;

    for(int i = 0; i < n + 1; i++){
        if(a[i + 1] - a[i] > mx){
            mx = a[i + 1] - a[i];
        }
    }

    cout << fixed << setprecision(10) << mx / 2.0;

    return 0;
}