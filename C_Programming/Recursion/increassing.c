// #include <stdio.h>
// void increassing(int x,int n){
//     if(x>n)
//      return ;
//     else
//      printf("%d\n",x);
//      increassing(x+1,n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     increassing(1,n);
//     return 0;
// }

// after recursive call
#include <stdio.h>
void decreassing(int n){
    if(n == 0)
     return ;
    else
     //printf("%d\n",n);
     decreassing(n-1);
     printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    decreassing(n);
    return 0;
}