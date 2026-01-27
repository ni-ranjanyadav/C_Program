#include<stdio.h>
int main(){
    int r;
    float pi = 3.14;
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    float area = pi*r*r;
    float circumference = 2*pi*r;
    printf("area of circle is %f\n",area);
    printf("circumference of circle is %f\n",circumference);
    return 0;
}