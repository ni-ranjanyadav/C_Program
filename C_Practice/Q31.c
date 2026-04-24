#include<stdio.h>
long long square(int n){
    return n * n;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %lld: ",num,square(num));
    return 0;
}