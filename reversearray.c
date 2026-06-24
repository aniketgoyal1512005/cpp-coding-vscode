#include<stdio.h>

void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    int x;
    while(start<end){
        x = arr[start];
        arr[start]=arr[end];
        arr[end]=x;
        start++;
        end--;
    }
    
}
int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(0);

    reversearray(arr,n);
   printf("the reversed array is: ");
   for(int i = 0; i<n;i++){
    printf("%d ", arr[i]);
   }
   return 0;
}