#include <stdio.h>
int main(){
    int num1,num2,isPrime;
    printf("Enter the value of num1 and num2: ");
    scanf("%d%d",&num1,&num2);
    printf("Prime no. b/w %d and %d are: ", num1,num2);
    for (int i = num1; i <= num2; i++)
    {
        if(i < 2) continue;
        isPrime = 1;
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}