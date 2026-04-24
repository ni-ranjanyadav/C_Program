#include<stdio.h>
int main(){
    int n, sum = 0, term = 9;
    printf("Enter number of term: ");
    scanf("%d", &n);

    for(int i=1; i <= n; i++){
        sum += term;
        term = term * 10 + 9;
    }
    printf("%d", sum);
    return 0;
}