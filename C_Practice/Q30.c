// // Factorial of a number using loop
// #include<stdio.h>
// int main(){
//     int n, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 2; i <= n; i++){
//         fact = fact * i;
//     }
//     printf("Factorial of %d is %d: ",n,fact);
//     return 0;
// }

// Factorial of a number using function
#include<stdio.h>
long long factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %lld: ",num,factorial(num));
    return 0;
}