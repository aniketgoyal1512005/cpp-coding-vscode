#include<stdio.h>

int printvalues( int arr[], int a,int b,int x){
    
    if(b>=a){
    int mid = (b+a)/2;
    if(arr[mid] == x){
        return mid;
    }
    if(arr[mid]>x){
        return printvalues(arr,a,mid-1,x);
    }
    if(arr[mid]<x){
        return printvalues(arr,mid+1,b,x);
    }
    }
    return -1;
}
int main(){
    int arr[]= {12,14,16,20,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x= 20;
    int result= printvalues(arr,0,n-1,x);
     if(result == -1){
        printf("number not found ");
        
     }
     else
     printf("number found at index: ");
     printf("%d" , result);
     return 0;
}