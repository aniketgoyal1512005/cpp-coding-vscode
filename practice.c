#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    char*x;
    float*c;
    int n = sizeof(p);
    int b = sizeof(x);
    int d = sizeof(c);
    printf("%d,%d,%d",n,b,d);

    return 0;


}