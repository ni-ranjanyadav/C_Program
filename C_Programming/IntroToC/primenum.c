#include <stdio.h>
    int main (){
        int num;
        printf("Enter the value of num: ");
        scanf("%d",&num);
        int a = 0;
        for(int i = 2;i<num-1;i++){
            if(num % i == 0){
                a =1;
                break;
            }
        }
        if(num==1)
        printf("1 is neither prime nor compositive.");
        else if(a==0)
        printf("%d is prime number.",num);
        else
        printf("%d is compositive number.",num);
        return 0;
    }