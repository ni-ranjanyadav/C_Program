#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of element: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d element: ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",ptr + i);
        // &arr = ptr + i
        // ptr + i means moving i address ahead in array
    }
    printf("The array elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
        // arr[i] = *(ptr + i)
    }
    return 0;
}