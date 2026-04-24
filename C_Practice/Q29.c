#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter no. of term: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        //sum += pow((2*i-1), i);
        // Actually here power gives floating point error that why answer is incorrect
        int base = (2*i-1);
        int power = 1;
        for(int j = 1; j <= i; j++){
            power = power * base;
        }
        sum = sum + power;
    }
    printf("Sum: %d", sum);
    return 0;
}



