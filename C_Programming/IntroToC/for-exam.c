/*#include<stdio.h>

long factorial(int n){
    if (n == 0 || n == 1)
    return 1;
    return n*factorial(n-1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    return 0;
}*/

// call by reference 
/*#include <stdio.h>
void add(int *a,int *b,int *sum){
    *sum = *a + *b;
}
int main(){
    int num1,num2,result;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    add(&num1,&num2,&result);
    printf("Sum = %d\n",result);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int a,b;
    int *p1,*p2;
    printf("Enter the number: ");
    scanf("%d%d",&a,&b);
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2)
        printf("Maximum = %d\n",*p1);
    else
    printf("Maximum = %d\n",*p2);
    return 0;
}*/

#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of element: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements: ",n);
    for(i = 0;i < n ;i++){
        scanf("%d",ptr+i);
    }
    printf("The array elements are:\n ");
    for(i = 0 ; i < n ; i++){
       printf("%d ",*(ptr+i)); 
    }
    return 0;
}