#include <stdio.h>
int main()
{
    int arr[8] = {42, 8, 9, 12, 15, 24, 21, 18};
    int min = arr[0];
    for (int i = 0; i <= 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}