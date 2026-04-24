#include<stdio.h>
int main(){
    int n;
    printf("Enter number of row: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = 1; j<=i; j++){
            printf(" *");
        }
        printf("\n");
        for(int k = 0; k <= n-i; k++){
            printf(" ");
        }
    }
    return 0;
}