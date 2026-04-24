#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a, b, temp;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping: a = %d and b = %d\n", a,b);
    swap(&a,&b);
    printf("After swapping: a = %d and b = %d", a,b);
    return 0;
}