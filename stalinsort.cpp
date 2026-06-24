#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int i = 0;i<t;i++){
        cin>>n;
        int a;
        int r = -1;
        int y = 1000000000;
        for(int j = 0;j<n;j++){
            cin>>a;
            if(y>a){
                y=a;
                r++;
            }

        }
        cout<<r<<endl;
    }
    return 0;
}