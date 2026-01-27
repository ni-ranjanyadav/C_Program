/*#include <stdio.h>
    int main(){
        int n,i,a;
        printf("Enter the no. of term: ");
        scanf("%d",&n);
        a = 1;
        for(i = 0;i<=n;i++){
            printf("%d ",a);
            a*=2;
        }
        return 0;
    }*/
    
    // print gp - 3,12,48,...
    #include <stdio.h>
    int main(){
        int n,i,a;
        printf("Enter the no. of term: ");
        scanf("%d",&n);
        a = 3;
        for(i = 0;i<=n;i++){
            printf("%d ",a);
            a*=4;
        }
        return 0;
    }