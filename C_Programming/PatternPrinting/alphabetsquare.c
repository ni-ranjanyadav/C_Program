// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter no 0f row: ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         int a = 1;
//         for(int j = 1; j <= n; j++){
//             int d = a+64;
//             char ch = (char)d;//
//             printf("%c ",ch);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    printf("Enter the no. of row: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d = a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}