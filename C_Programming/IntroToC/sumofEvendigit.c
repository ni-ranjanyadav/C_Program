#include <stdio.h>
int main(){
    int n;
    printf("Enter the digit: ");
    scanf("%d",&n);
    int sum = 0;
        while(n!=0){
            int digit = n%10;
            if(digit % 2 == 0){
            sum = sum +digit;
            }
            n = n/10;
            }
            printf("The sum of even digit is %d",sum);
        return 0;
    }