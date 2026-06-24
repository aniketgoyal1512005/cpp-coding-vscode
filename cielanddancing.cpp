#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int song;
    int one = 1;
    int two = 2;

    if(n<=m){
        song = 2*n -1 +m-n;
        cout<<song<<endl;
        cout<<one<<endl;
        cout<<one<<endl;

        for(int i  = 1;i<n;i++){
            cout<<i<<endl;
            cout<<i+1<<endl;
            cout<<i+1<<endl;
            cout<<i<<endl;
        }                
        for(int j = 0;j<(m-n);j++){
            cout<<n<<endl;
            cout<<n+j+1<<endl;
        }
    }else{
        song = 2*m -1 +n-m;
        cout<<song<<endl;
         cout<<one<<endl;
        cout<<one<<endl;
    
        for(int i  = 1;i<m;i++){
            cout<<i<<endl;
            cout<<i+1<<endl;
            cout<<i+1<<endl;
            cout<<i<<endl;
        }                
        for(int j = 0;j<(n-m);j++){
            cout<<m+j+1<<endl;
            cout<<m<<endl;
        }
    }
    return 0;
    }
       