#include<stdio.h>
#include<math.h>


    
    

int main(){
    int arr[]= {13,11,15,17,11,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x =0;
    for(int i = 0;i<n;i++){
    x=x+arr[i];
    }

    printf("the sum is ");
    printf("%d\n",x);
    printf("%f", (float)x/n );
    return 0;
}