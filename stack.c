#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
int choice,value;
int main(){
    while(1){
        printf("stack operation\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. print stack\n");
        printf("4. exit\n");
        printf("enter the choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            if(top == max-1){
                printf("stack overflow,cannot push");
            } else{
                printf("enter value: ");
                scanf("%d",&value);
                stack[top]= value;
                top++;
            }
            break;
            case 2:
            if(top == -1){
                printf("stack is empty,cannot pop");
            }else{
                printf(" %d popped from stack",stack[top]);
            }
            break;
            case 3:
            if(top == -1){
                printf("stack is empty");
            }else{
                int i;
                for(i = top;i>=0;i--){
                    printf("%d  ",stack[i]);
                }
            }
            break;
            case 4:
            return 0;

            default:
            printf("invalid choice please try again");
        }

    }
    return 0;
}