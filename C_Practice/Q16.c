#include<stdio.h>
int main(){
    int n, isPrime;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Prime number b/w 1 and %d are: ",n);
    for (int i = 2; i <= n; i++){
        isPrime = 1;
        for (int j = 2; j*j <= i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d ", i);
    }
    return 0;
}