#include <stdio.h>
int recursion(int low,int high) {
    if (low>high) {
        return 0;
    }

    int l=0;
    if (low%5==0&&low%7!=0) {
        l=low;
    }
    return l+recursion(low+1,high);
}

int main() {
    int a,b,low,high;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    if (a<=b) {
        low=a;
        high=b;
    } else {
        low=b;
        high=a;
    }

    int result = recursion(low, high);
    printf("The sum of numbers divisible by 5 but not by 7 in the range [%d, %d] is: %d\n",low,high,result);

    return 0;
}
