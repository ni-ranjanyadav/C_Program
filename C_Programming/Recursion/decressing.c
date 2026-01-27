#include <stdio.h>
void decreassing(int n){
    if(n == 0)
     return ;
    else
     printf("%d\n",n);
     decreassing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    decreassing(n);
    return 0;
}