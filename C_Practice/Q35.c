#include<stdio.h>
int main(){
    int a, b, sum = 0;
    int *x, *y;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    x = &a;
    y = &b;
    sum = *x + *y;
    printf("Sum: %d", sum);
    return 0;
}