#include<stdio.h>

int main() {
    int num1 = 0, num2 = 1, low, high, i, j, k, isprime;

    printf("Enter low and high: ");
    scanf("%d %d", &low, &high);

    
    for(i = 0; num1 <= high; i++) {
    
        isprime=1; 
        if (num1>1) {
            for(j=2;j*j<=num1;j++) {
                if (num1%j==0) {
                   isprime = 0;
                 break; 
                }
            }
        } else {
            isprime=0; 
        }

    
        if (num1>=low&&isprime) {
            printf("%d ",num1);
        }
        num1+=num2;


        isprime=1; 
        if (num2>1) {
            for(k=2;k*k<=num2;k++){
                if (num2%k==0) {
                    isprime=0;
                    break;
                }
            }
        } else {
            isprime=0; 
        }

    
        if (num2>=low&&isprime) {
            printf("%d ",num2);
        }

    
        num2 += num1;
    }

    return 0;
}
