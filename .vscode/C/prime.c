#include<stdio.h>

int main(){
    int i,number,isprime=1;
    printf("enter the number: ");
    scanf("%d",&number);
    if(number<0){
        isprime = 0;
    }
    for(i=2;i*i<=number;i++){
        if(number%i==0){
            isprime = 0;
            break;
        }
        else{
            isprime= 1;
        }
    }
    if(isprime){
        printf("the number is prime");
    }else{
        printf("the number is not prime");
    }
    return 0;
}