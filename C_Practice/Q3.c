#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter number: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    float avg = (a+b+c+d+e)/5;
    printf("Average: %.2f", avg);
    return 0;
}