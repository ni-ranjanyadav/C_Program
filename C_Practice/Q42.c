#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    //int *ptr = arr;
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        //sum += *(arr + i);
        sum += arr[i];
    }
    printf("Sum of an arr is %d", sum);
    return 0;
}
// If we remove comment then this que become sum using pointer