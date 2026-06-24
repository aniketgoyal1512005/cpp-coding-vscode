#include <stdio.h>
void findDays(int q, long long data[][4]){
    for (int j=0; j<q; j++){
        long long goal=data[j][0], p=data[j][1], q=data[j][2], r=data[j][3];
        long long total=p+q+r, rounds=goal/total, reached=rounds*total, left=goal-reached;
        if (left <= 0) 
            printf("%lld\n", rounds*3);
        else if (left <= p) 
            printf("%lld\n", rounds*3+1);
        else if (left <= p+q) 
            printf("%lld\n", rounds*3+2);
        else 
            printf("%lld\n", rounds*3+3);
    }
}
int main() {
    int cases; 
    scanf("%d", &cases);
    long long inputs[cases][4];
    for (int k=0; k<cases; k++) 
        scanf("%lld%lld%lld%lld", &inputs[k][0], &inputs[k][1], &inputs[k][2], &inputs[k][3]);
        
    findDays(cases, inputs);

    return 0;
}
