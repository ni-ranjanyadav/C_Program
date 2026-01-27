#include <stdio.h>
int main(){
    int n,firstnum=0,secondnum=1,next;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("%d ",firstnum);
        next = firstnum + secondnum;
        firstnum = secondnum;
        secondnum = next;        
    }
    return 0;
}
//0,1,1,2,3,5,8,13,  