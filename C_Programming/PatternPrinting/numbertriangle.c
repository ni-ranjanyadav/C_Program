// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j); // if j=i =?
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    int a = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("%d ",j);
        }
        printf("\n");
        a--;
    }
    return 0;
}