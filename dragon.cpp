#include<iostream>
using namespace std;

int sort(int x[],int y[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(x[j]>x[j+1]){
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }
}

int main(){
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    int k=1;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x,y,n);
    for(int i=0;i<n;i++){
        if(s>x[i]){
            s+=y[i];
        }else{k=0;}

    }
    if(k==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}