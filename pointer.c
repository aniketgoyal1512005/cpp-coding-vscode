#include<stdio.h>

int main(){
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    int *y= &x;
    printf("the number is %d",*y);
    return 0;
}