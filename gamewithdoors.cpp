#include<iostream>
using namespace std;

int main(){
    int t, l, r, L, R, result;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> l >> r >> L >> R;

        if(r < L || R < l){
            result = 1;
        }
        else if(l==L&&r==R){
            result = r-l;
        }
        else if(r == L || l == R){
            result = 2;
        }
        else if(r<R&&l>L){
            result = r-l+2;
        }
        else if(l<L && r>L && r<R){
            result = r - L + 2;
        }
        else if(l>L && r<R){
            result = r - l +2;
        }
        else{
            int left = max(l, L);
            int right = min(r, R);
            result = right - left +1;
        }

        cout << result << endl;
    }

    return 0;
}
