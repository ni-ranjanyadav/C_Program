#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i =1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int SeriesSum(int limit){
    float sum = 0.0;
    for(int i = 1; i <= limit; i++){
        sum = sum + factorial(i)/i;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter num of term: ");
    scanf("%d",&n);
    float result = SeriesSum(n);
    printf("Series sum : %.5f", result);
    return 0;
}