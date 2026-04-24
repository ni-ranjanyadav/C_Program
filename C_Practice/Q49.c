#include<stdio.h>
#include<math.h>
int main(){
    int x, n;
    float sum = 0;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter no. of term: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int power = 2*i+1;
        float term = pow(x, power);
        if(i%2!=0) 
            term = -term;

        sum += term;
    }
    printf("Sum of series is %.2f.", sum);
    return 0;
}