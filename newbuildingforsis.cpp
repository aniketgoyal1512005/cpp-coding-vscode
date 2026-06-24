#include<iostream>
using namespace std;

int main(){
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    int w,x,y,z,time;
    for(int i = 0;i<k;i++){
        cin>>w>>x>>y>>z;
        if(w==y){
            time = max(x-z,z-x);
        }
        else if(x>b){
                time = x-b+max(y-w,w-y)+max(z-b,b-z);
        }
        else if(x<=b&&x>=a){
                time = max(y-w,w-y)+max(z-x,x-z);
        }
        else if(x<a){
                time = a-x+max(y-w,w-y)+max(z-a,a-z);
        }
        cout<<time<<endl;
    }
    return 0;
}