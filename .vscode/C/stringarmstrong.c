#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char number[100];
    printf("Enter the number to be checked as Armstrong number: ");
    scanf("%s", number);
    
    int n = strlen(number);
    printf("The length of the number is %d\n", n);

    int i, cubesum = 0;
    for(i = 0; i < n; i++){
        int digit = number[i] - '0';

        int digit_power = 1;
        for (int j = 0; j < n; j++) {
            digit_power *= digit;
        }

        cubesum += digit_power;
    }

    int originalnumber = atoi(number); 

    if(cubesum == originalnumber){
        printf("Yes, it is an Armstrong number.\n");
    }
    else{
        printf("No, it is not an Armstrong number.\n");
    }

    return 0;
}
