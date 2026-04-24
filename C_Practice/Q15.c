#include<stdio.h>
int main(){
    int n, a = 0, b = 1, next;
    printf("Enter number of term: ");
    scanf("%d",&n);

    printf("Fibonacci sequence: ");
    for(int i = 1; i <= n; i++){
        printf(" %d",a);
        next = a+b;
        a=b;
        b=next;
    }
    return 0;
}