#include <stdio.h>
void sum(int n){
    int s = 0;
    s += n*(n+1)/2;
    printf("%d",s);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}