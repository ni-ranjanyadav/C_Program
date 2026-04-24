#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Even number: ");
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    printf("\nOdd number: ");
    for(int j = 1; j <= n; j++){
        if(j%2!=0){
            printf("%d ", j);
        }
    }
    return 0;
}