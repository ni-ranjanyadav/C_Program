#include<stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        printf("%d is prefect number.", num);
    else
        printf("%d is not prefect number.", num);
    return 0;
}