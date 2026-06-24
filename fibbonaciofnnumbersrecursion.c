#include<stdio.h>

int recursion(int i,int k,int num1,int num2){
    if(i==k){
        return 1;
}else{
num1+=num2;
num2+=num1;
printf("%d  ",num1);
printf("%d  ",num2);
  

    return recursion(i+1,k,num1,num2);
}
}
int main(){
    int n;
    printf("enter number in series: ");
    scanf("%d",&n);
    int k = n/2;
    recursion(0,k,0,1);
    
    return 0;
}