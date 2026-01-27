#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("Valid tiangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}