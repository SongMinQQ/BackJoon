#include<stdio.h>

void main(){
    int A, B, C;

    scanf("%d %d %d",&A, &B, &C);
    if((2 <= A, B, C) && (A, B, C <=10000)){
        printf("%d\n",(A+B)%C);
        printf("%d\n",((A%C) + (B%C))%C);
        printf("%d\n",(A*B)%C);
        printf("%d\n",((A%C) * (B%C))%C);
    };
    exit(0);
};