#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int sub = a-b;
    int product = a*b;
    int divide = a/b;
    int reminder = a%b;
    printf("sum is %d\n",sum);
    printf("sub is %d\n",sub);
    printf("product is %d\n",product);
    printf("divide is %d\n",divide);
    printf("reminder is %d\n",reminder);
    return 0;
}