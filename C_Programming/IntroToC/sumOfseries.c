//1+2+3+4+....
/*#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        sum = sum + i ;
    }
    printf("%d", sum);
    return 0;
}*/

//1-2+3-4+5-6+......
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        if(i%2!=0){
            sum = sum +i;
        }
        else{
            sum = sum - i;
        }
    }
    printf("%d",sum);
    return 0;
}