#include<stdio.h>
int main(){
    int a = 5;
    int b = 8;
    int* x = &a;
    int* y = &b; 
    printf("%d\n",*x);
    printf("%p\n",&a);       //%p - address of veriable
    printf("%p\n",&*x);
    printf("%d\n",*y);
    printf("%p\n",&*y);
    printf("%p",&b);
    return 0;
}