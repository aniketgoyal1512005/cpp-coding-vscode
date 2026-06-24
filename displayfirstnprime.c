#include<stdio.h>

int primenumber(int n){
  int i=0,j,k,l=1;
  printf("the first %d prime numbers are: ",n);
    for(j = 2; i < n; j++){
        for(k=j-1;k>1;k--){
            if(j%k==0){
                 l = 0;
                 break;
             } else{
                 l = 1;
            }
        }
        if(l==1){
            printf("%d   ",j);
            i++;
        }
    }
  
}
int main(){
    int n;
    printf("enter number of prime number to output: ");
    scanf("%d",&n);
    primenumber(n);
    return 0;

}