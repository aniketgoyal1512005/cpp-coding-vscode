#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int last_e,last_o;
    int count_e=0,count_o=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            last_e=i;
            count_e++;
        }else{
            last_o=i;
            count_o++;
        }
    }
    if(count_e==1){
        cout<<last_e+1;
    }else{
        cout<<last_o+1;
    }
}