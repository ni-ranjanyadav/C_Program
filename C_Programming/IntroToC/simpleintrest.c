#include<stdio.h>
    int main(){
        float p,r,t;
        printf("Enter the value of principle: ");
        scanf("%f",&p);
        printf("Enter the value of rate: ");
        scanf("%f",&r);
        printf("Enter the value of time in months: ");
        scanf("%f",&t);
        float SI = (p*r*t)/100;
        printf("simple intrest is: %f",SI);
        return 0;
    }
    