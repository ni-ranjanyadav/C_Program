// print ap 1,3,5,7,9,....
 /*#include <stdio.h>
    int main (){
        int n;
        printf("Enter the value of n: ");
        scanf("%d",&n);
        for(int i=1;i<=2*n-1;i+=2){
            printf("%d ",i);
        }
        return 0;
    }*/
    //print ap 4,7,10,13,....
    #include <stdio.h>
    int main (){
        int n;
        printf("Enter the value of n: ");
        scanf("%d",&n);
        for(int i=4;i<=3*n+1;i+=3){
            printf("%d ",i);
        }
        return 0;
    }