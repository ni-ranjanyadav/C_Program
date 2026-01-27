#include <stdio.h>
int main()
{
    int arr[7] = {12, 9, 13, 21, 42, 16, 23};
    int totalpairs = 0;
    int x = 25;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i+1; j <= 6; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}