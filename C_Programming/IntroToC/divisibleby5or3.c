#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
    {
        printf("%d is divisible by 3 or 5", num);
    }
    else
    {
        printf("%d is not divisible by 3 or 5", num);
    }
    return 0;
}