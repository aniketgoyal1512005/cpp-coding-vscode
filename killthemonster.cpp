#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int q;
    while (t--) {
        long long hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;


        for (long long i = 0; i <= k; i++) {
            long long new_dc = dc + i * w;
            long long new_hc = hc + (k - i) * a;

            long long turns_to_kill = (hm + new_dc - 1) / new_dc;
            long long turns_to_die = (new_hc + dm - 1) / dm;

            if (turns_to_die >= turns_to_kill) {
                q = 1;
                break;
            }
            else  {
                q = 0;
            }
        }
        if(q==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}
