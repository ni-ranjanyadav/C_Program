// // This is call by value
// #include<stdio.h>
// int sum(int x, int y){
//     return x + y;
// }
// int main(){
//     int a, b, result;
//     printf("Enter two number: ");
//     scanf("%d%d", &a, &b);
//     result = sum(a,b);
//     printf("Sum: %d", result);
//     return 0;
// }

// This is call by reference
#include<stdio.h>
void add(int *x, int *y, int *sum){
    *sum = *x + *y;
}
int main(){
    int a, b, result;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    add(&a,&b,&result);
    printf("Sum: %d", result);
    return 0;
}