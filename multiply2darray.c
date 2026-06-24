#include<stdio.h>

int main(){
    int arr1[2][2]={
        {1,0},
        {0,1}
    };
    int arr2[2][2]={
        {1,2},
        {3,4}
    };
    int arr3[2][2];
    int i,j,m,n;
    for(i =0;i<2;i++){
        for(j=0;j<2;j++){
            for(m=0;m<2;m++){
                for(n=0;n<2;n++){
       arr3[i][j]=(arr1[i][j]*arr2[i][j])+(arr1[i][j+1]*arr2[i+1][j]);
            }
            }
       printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}