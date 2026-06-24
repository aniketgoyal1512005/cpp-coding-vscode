#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    int count=0;
    int s=0;
    int d=0;
    do{
        if(a[j]>a[i]){
            if(count%2==0){
                s+=a[j];
            }else{
                d+=a[j];
            }
            count++;
            j--;
        }else{
            if(count%2==0){
                s+=a[i];
            }else{
                d+=a[i];
            }
            count++;
            i++;
        }
    }while(j-i>=0);
    cout<<s<<" "<<d;

}