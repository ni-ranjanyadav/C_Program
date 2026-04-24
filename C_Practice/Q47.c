#include<stdio.h>
int main(){
    int num, temp, rem, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0){
        rem = temp % 10;
        reversed = reversed * 10 + rem;
        temp /= 10; 
    }
    if(reversed == num)
        printf("%d is Palindrome number.", num);
    else
        printf("%d is not a Palindrome number.", num);
    return 0;
}