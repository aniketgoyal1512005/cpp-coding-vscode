#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char c[10]={"123456789"};
    int len = strlen(c);
    for(i=1;i<2*len;i++){
        if(i<9){
    for(j=0;j<i;j++){
        printf("%c",c[j]);
    }
    printf("\n");
        }else{
            for(j=0;j<2*len-i;j++){
                printf("%c",c[j]);
            }
            printf("\n");
        }
    }
    return 0;
}