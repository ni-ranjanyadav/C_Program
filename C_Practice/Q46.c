#include<stdio.h>
#include<math.h>
int main(){
    int num, temp, rem, digit = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0){
        digit++;
        temp /= 10;
    }

    temp = num;

    while(temp!=0){
        rem = temp % 10;
        //result += (int)pow(rem, digit);
        // instead of these above line we can use for loop
        int power = 1;
        for(int i = 1; i <= digit; i++){
            power *= rem;
        }
        result += power;
        temp /= 10;
    }

    if(result == num) printf("%d is Armstrong number.",num);
    else printf("%d is not Armstrong number.",num);
    return 0;
}