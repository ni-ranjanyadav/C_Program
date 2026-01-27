#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the five no. : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float avg = (a+b+c+d+e)/5;
    printf("The avg of five no. is %f",avg);
    return 0;
}