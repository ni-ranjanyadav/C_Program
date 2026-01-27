#include<stdio.h>
void fibonacci(int n){
    int a = 0,b = 1,next;
    printf("Fibonacci series of %d term is:\n ",n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        next = a+b;
        a=b;
        b=next;
    }
}
int main(){
    int term;
    printf("Enter the number of term: ");
    scanf("%d",&term);
    if(term<=0)
        printf("Enter positive number\n");
    else 
        fibonacci(term);
    return 0;
}