#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    int p,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                p=i;
                l=j;
            }
        }
    }
    int swap=abs(p-2)+abs(l-2);
    cout<<swap;
    return 0;
}