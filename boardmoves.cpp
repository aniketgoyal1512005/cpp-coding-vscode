#include<iostream>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    for(long long i = 0;i<t;i++){
        cin>>n;
        long long steps=0;
        long long k = n/2;
        for(long long j =1;j<=k;j++){
            steps = steps+(4*j)*j;
        }
        for(long long l = n-2;l>0;l--){
            for(long long q = 1;q<=k;q++){
                steps = steps + 4*(l-1)*(q+k);
            }
        }
        cout<<steps<<endl;
    }
    return 0;

}