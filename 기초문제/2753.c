#include<stdio.h>
//백준 2753 윤년 판별
void main(){
    int a;

    scanf("%d",&a);

    if((a >= 1) && (a <= 4000)){
        if((((a % 4) == 0) && ((a % 100) > 0)) || ((a % 400) == 0)){
            printf("1");
        }
        else
            printf("0");
    }
    exit(0);
};