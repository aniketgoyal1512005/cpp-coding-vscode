#include<stdio.h>
int main(){
    int number;
    int factorial= 1;
    printf("enter the number: ");
    scanf("%d",&number);
    int i;
    for(i = 1; i <= number;i++){
        factorial*=i;
        
    }
    printf("the factorial is %d",factorial);
    return 0;
}