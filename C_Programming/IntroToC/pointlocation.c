#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinate: ");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("coordinate is at origin.");
    }
    else if (x == 0)
    {
        printf("coordinate lies on y-axis.");
    }
    else if (y == 0)
    {
        printf("coordinate lies on x-axis.");
    }
    else
    {
        printf("coordinate doesn't lies on x and y - axis.");
    }
    return 0;
}