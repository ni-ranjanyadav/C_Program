#include<stdio.h>
int main(){
    float x;
    printf("Enter the value of x: ");
    scanf("%fS",&x);
    printf("The value of x is %f\n",x);
    int y;
    y = x;
    printf("The value of y is %d\n",y);
    float z = x-y;
    printf("float value is %f",z);
    return 0;
}