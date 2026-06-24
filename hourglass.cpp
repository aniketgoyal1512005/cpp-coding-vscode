#include<Iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        int q = m/k;
        int r = m%k;
        if(s<=k){
            if(s<=r){
                cout<<"0\n";
            }else{
                cout<<s-r<<endl;
            }
        }else{
            if(q%2==0){
                if(s<=r){
                    cout<<"0\n";
                }else{
                    cout<<s-r<<endl;
                }
            }else{
                if(k<=r){
                    cout<<"0\n";
                }else{
                    cout<<k-r<<endl;
                }
            }
        }
    }
    return 0;
}