#include<stdio.h>
    int main(){
        int a,b;
        printf("Enter the value of dividend: ");
        scanf("%d",&a);
        printf("Enter the value of divisor: ");
        scanf("%d",&b);
        int q = a/b;
        int r = a-(q*b);
        printf("Remainder is %d",r); // Dividend =  Divisior * Quotient + Remainder
        return 0;
    }