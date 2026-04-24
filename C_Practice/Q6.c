#include<stdio.h>
int main(){
    int r;
    printf("Enter radius of circle: ",r);
    scanf("%d",&r);
    float pi = 3.14;
    float area = pi*r*r;

    printf("Area of circle: %.2f\n",area);
    return 0;
}