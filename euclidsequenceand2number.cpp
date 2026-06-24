#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int m;
        cin>>m;

        long long z[105];

        for (int p=0;p<m;p++){
            cin>>z[p];
        }

        sort(z,z+m);
        reverse(z,z+m);

        if (m==2){
            cout<<z[0]<<" "<<z[1]<<"\n";
            continue;
        }

        int f=1;

        for (int r=0;r<=m-2;r++){
            if (z[r]<=z[r+1]){
                f=0;
                break;
            }
        }

        if (f==1){
            for (int r=0;r<=m-3;r++){
                if (z[r]%z[r+1]!=z[r+2]){
                    f=0;
                    break;
                }
            }
        }

        if (f==1){
            cout<<z[0]<<" "<<z[1]<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }

    return 0;
}