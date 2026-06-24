#include<iostream>
using namespace std;

long long h[3005];
long long a[3005];
long long l[3005];
long long r[3005];
long long ans[3005];

int main(){

    int test;
    cin>>test;

    while(test--){

        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>h[i];
        }

        for(int start=0;start<n;start++){

            for(int i=0;i<n;i++){
                a[i]=h[(start+i)%n];
            }

            l[0]=a[0];

            for(int i=1;i<n;i++){

                if(l[i-1]>a[i]){
                    l[i]=l[i-1];
                }
                else{
                    l[i]=a[i];
                }

            }

            r[n-1]=a[n-1];

        for(int i=n-2;i>=0;i--){
                if(r[i+1]>a[i]){
                    r[i]=r[i+1];

                }
                else{
                    r[i]=a[i];

                }

            }


            long long sum=0;

            for(int i=1;i<n;i++){

                if(l[i-1]<r[i]){
                    sum+=l[i-1];
                }
                else{
                    sum+=r[i];
                }

            }

            ans[start]=sum;
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<"\n";
    }

    return 0;
}