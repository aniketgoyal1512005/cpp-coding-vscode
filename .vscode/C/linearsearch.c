#include<stdio.h>

void main(){
    int n,key,i,j,hotbar=0;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter key: ");
    scanf("%d",&key);
    printf("enter numbers in array: ");
    for(i = 0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(j = 0;j<n;j++){
        if(arr[j]==key){
            hotbar= 1;
            break;
        }
        }
    
    if(hotbar){
    printf("the number is present in index: %d",j);
    } else{
        printf("the number is not present in array");
    }
    
}