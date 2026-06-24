#include<iostream>
using namespace std;

int pal(long long x){
    long long r=0;
    long long t=x;

    while(t>0){
        r=r*10+t%10;
        t=t/10;
    }

    if(r==x){
        return 1;
    }

    return 0;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n<22){
            int f=0;

            for(long long a=n;a>=0;a--){
                if(pal(a) && (n-a)%12==0){
                    cout<<a<<" "<<n-a<<"\n";
                    f=1;
                    break;
                }
            }

            if(f==0){
                cout<<-1<<"\n";
            }

            continue;
        }

        long long a;

        if(n%12<=9){
            a=n%12;
        }else if(n%12==10){
            a=22;
        }else{
            a=11;
        }

        cout<<a<<" "<<n-a<<"\n";
    }

    return 0;
}