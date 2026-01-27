#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("largest no. is %d\n",a);
    else if(b>c)
    printf("largest no. is %d\n",b);
    else
    printf("largest no. is %d\n",c);
    return 0;
}