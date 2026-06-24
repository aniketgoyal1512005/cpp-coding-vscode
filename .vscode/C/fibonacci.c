#include<stdio.h>

int main(){
      int num1,num2,number,i;
      printf("enter the 2 starting number: ");
      scanf("%d %d",&num1,&num2);
        printf("enter the number of elements in the series: ");
        scanf("%d",&number);
          for(i =0;i<number;i++){
            num1+=num2;
            printf("%d  ",num1);
            num2+=num1;
            printf("%d  ",num2);
          }
          return 0;
}