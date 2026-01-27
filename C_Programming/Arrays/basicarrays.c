#include <stdio.h>
int main(){
    int arr[5];
    for(int i =0;i<=4;i++){
        int a = i+1;
        printf("Enter element%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<5;i++){
        printf("%d ",arr[i]);
    }
    // int arr[5] = {2,3,4,5,6 };
    // arr[4] = 100;
    // printf("%d",arr[4]);
    // printf("Enter 1st element: ");
    // scanf("%d",&arr[0]);
    // printf("Enter 2nd element: ");
    // scanf("%d",&arr[1]);
    // printf("Enter 3rd element: ");
    // scanf("%d",&arr[2]);
    // printf("Enter 4th element: ");
    // scanf("%d",&arr[3]);
    printf("%d",arr[2]);
    return 0;
}