#include <stdio.h>

int main(){

float a,b;
char c;

printf("enter the 2 inputs: ");
scanf("%d %d",&a,&b);
printf("enter operator: ");
scanf(" %c",&c);

switch(c){
    case '+':printf("result is: %f",a+b);
    case '-':printf("result is: %f",a-b);
    case '*':printf("result is: %f",a*b);
    case '/':printf("result is: %f",a/b);

    break;
    default: printf("enter valid operator");
}
return 0;
}