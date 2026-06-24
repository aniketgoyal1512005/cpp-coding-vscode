#include<stdio.h>

int a,b;
int interconversion(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    printf("enter the numbers: ");
    scanf("%d %d",&a ,&b);

    interconversion(a,b);
    printf("the numbers become: %d and %d",a,b);
    return 0;
}