#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,8};
    int product = 1;
    int sum = 0;
    for(int i=0;i<=4;i++){
        product = product * arr[i];
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
    printf("%d",product);
    return 0;
}