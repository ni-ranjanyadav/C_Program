#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    double square_root = sqrt(n);
    int power = pow(2,9);
    printf("the square root of %d is %lf\n",n,square_root);
    printf("power:%d",power);
    return 0;
}