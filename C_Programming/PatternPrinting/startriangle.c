// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     int a=n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=a;j++){
//             printf("* ");
//         }
//         printf("\n");
//         a--;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a - 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
        a--;
    }
    return 0;
}