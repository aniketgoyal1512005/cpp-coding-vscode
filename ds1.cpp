#include<iostream>
using namespace std;

int main(){
    int i, j = 0;
    int arr[8] = {1,4,7,4,2,1,7,4};

    for(int k = 0; k<8; k++){
        int y = 0;

        for(int x=0;x<k;x++){
            if(arr[k] == arr[x]){
                y = 1;
                break;
            }
        }

        if(y == 0){
            for(i=k+1;i<8;i++){
                if(arr[k] == arr[i]){
                    j++;
                }
            }
            cout<<arr[k]<<": "<<j+1<<endl;
            j = 0;
        }
    }

    return 0;
}
