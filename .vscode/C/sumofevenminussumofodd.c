#include<stdio.h>

int main(){
    int n;
    printf("enter number of inputs: ");
    scanf("%d",&n);
    if(n>0){
    int sumeven=0,sumodd=0,arr[n],j,i;
    printf("enter the numbers: ");
    for(i = 0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(j = 0;j<n;j++){
        if(j%2==0){
            sumeven +=arr[j];
        } else{
            sumodd+=arr[j];
        }
    }
    int result = sumeven - sumodd;
    printf("the difference between even indexed and odd indexed is: %d",result);
    
    }else{
        printf("enter valid number!");
        return-1;
    }
    return 0;
}