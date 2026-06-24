#include<iostream>
using namespace std;
 int k = 0;
int inversion(int i,int arr[]){
    if(i<8){
    for(int j = i;j<8;j++){
            if(i<j&&arr[j]<arr[i]){
                k++;
            }
    }
}else{
    return 0;
}
inversion(i+1,arr);
}

int main(){
    int arr[8] = {4,3,7,2,7,1,10,9};

    inversion(0,arr);
    cout<<k<<endl;
    return 0;
}