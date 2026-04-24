#include<stdio.h>
int main(){
    int r;
    printf("Enter radius of circle: ",r);
    scanf("%d",&r);
    float pi = 3.14;
    float area = pi*r*r;
    float circum = 2*pi*r;
    printf("Area: %.2f\n",area);
    printf("circumference: %.2f",circum);
    return 0;
}