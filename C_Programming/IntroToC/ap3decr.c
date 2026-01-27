// display ap- 100,97,94,91,.....(only positive no.)
#include <stdio.h>
int main(){
    int n,i,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=100;
    for(i = 1; a>0; i++){
        printf("%d ",a);
        a-=3;
    }
    return 0;
}