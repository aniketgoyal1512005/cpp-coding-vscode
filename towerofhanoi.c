#include<stdio.h>

void recursion(int n,int source,int auxilary,int destination){
    if(n==1){
        printf("the disk %d moved from %c to %c\n",n,source,destination);
        return;
    }
     recursion(n-1,source,destination,auxilary);
     printf("the disk %d moved from %c to %c\n",n,source,destination);
     recursion(n-1,auxilary,source,destination);
}int main(){
    int n;
    printf("enter the number of rings: ");
    scanf("%d",&n);

    recursion(n,'A','B','C');
    return 0;
}