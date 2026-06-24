#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    for(int i = 0;i<t;i++){
        int y = 0;
        int min = 1000000000;
        cin>>n;
        for(int j = 1;j<=n;j++){
            int a;
            cin>>a;
            if(a<min){
                min=a;
                y=j;
            }
        }
        if(n%2!=0){
            cout<<"Mike"<<endl;
        }
        else{
            if(y%2==0){
                cout<<"Mike"<<endl;
            }
            else{
                cout<<"Joe"<<endl;
            }
        }
    }
    return 0;
}