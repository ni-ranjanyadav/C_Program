#include <stdio.h>
//#include <limits.h>
int main()
{
    int arr[8] = {-4, -6, -7, -8, -23, -4, -13, -14};
    //int max = INT_MIN;
    int max = arr[0];
    for (int i = 0; i <= 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}