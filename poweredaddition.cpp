#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long a[n];
        int x = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long max = 0;

        for(int i = 1; i < n; i++){

            if(a[i] < a[i-1]){

                long long max_i = a[i-1] - a[i];

                if(max_i > max){
                    max = max_i;
                }

                a[i] = a[i-1];
            }
        }

        long long j = 1;
        long long sum = 0;

        while(sum < max){
            sum = sum + j;
            j = j * 2;
            x++;
        }

        cout << x << endl;
    }

    return 0;
}