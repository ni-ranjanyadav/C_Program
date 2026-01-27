// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter value of a: ");
//     scanf("%d",&a);
//     printf("Enter value of b: ");
//     scanf("%d",&b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("The value of a: %d\n",a);
//     printf("The value of b: %d",b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter value of a: ");
//     scanf("%d",&a);
//     printf("Enter value of b: ");
//     scanf("%d",&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("The value of a: %d\n",a);
//     printf("The value of b: %d",b);
//     return 0;
// }

#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a: %d\n",a);
    printf("The value of b: %d",b);
    return 0;
}