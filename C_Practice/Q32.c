#include<stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swaping: A = %d , B = %d",a,b);
}
int main(){
    int A,B;
    printf("Enter two number A and B: ");
    scanf("%d%d", &A, &B);
    printf("Before swapping: A = %d, B = %d\n",A,B);
    swap(A,B);
    return 0;
}