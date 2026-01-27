/*#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the the value of n: ");
    scanf("%d", &n);
    int a = 4;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a += 3;
    }
    return 0;
}*/

#include <stdio.h>
int main(){
    int n,a,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=1;
    for(i = 1; i <= n; i++){
        printf("%d ",a);
        a+=2;
    }
    return 0;
}