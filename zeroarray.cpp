#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    long long s=0;
    if(sum%2==0){
        for(int i=0;i<n-1;i++){
            s+=arr[i];
        }
        if(s>=arr[n-1]){
            cout<<"YES"<<endl;
            return 0;
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
}else{
    cout<<"NO"<<endl;
    return 0;
}
}