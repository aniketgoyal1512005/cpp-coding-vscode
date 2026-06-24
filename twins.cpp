#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int sump=0;
    int count=0;
    for(int j=n-1;j>=0;j--){
        sump+=a[j];
        count++;
        if(sump>sum/2){
            break;
        }
    }
    cout<<count;
    return 0;
}