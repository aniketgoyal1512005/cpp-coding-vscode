#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    gets(name);
    puts(name);
    puts(strrev(name));
    puts(strupr(name));
    return 0;
}