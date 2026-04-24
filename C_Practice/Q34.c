#include<stdio.h>
int* findminmax(int arr[], int size){
    static int result[2];
    result[0] = result[1] = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > result[1]) result[1] = arr[i];
        if(arr[i] < result[0]) result[0] = arr[i];
    }
    return result;
}
int main(){
    int arr[5] = {12, 45, 7, 23, 89};
    int* res = findminmax(arr, 5);
    printf("min = %d\n", res[0]);
    printf("max = %d", res[1]);
    return 0;
}