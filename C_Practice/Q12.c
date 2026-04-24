#include<stdio.h>
int main(){
    int a, b, c, d, e;
    printf("Enter the number: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int largest = a, smallest = a;
    if(b>largest) largest = b;
    if(c>largest) largest = c;
    if(d>largest) largest = d;
    if(e>largest) largest = e;

    if(b<smallest) smallest = b;
    if(c<smallest) smallest = c;
    if(d<smallest) smallest = d;
    if(e<smallest) smallest = e;

    printf("Largest number is: %d\n",largest);
    printf("smallest number is: %d",smallest);

    return 0;
}