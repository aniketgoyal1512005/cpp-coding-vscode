#include<stdio.h>
#include<string.h>

int main(){
    char c[10]= {"aeiou"};
    int i,k;
    int len = strlen(c);
    for(i = 0; i<len;i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
        k++;}

    }
    printf("%d",k);
    return 0;
}