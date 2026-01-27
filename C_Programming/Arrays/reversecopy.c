#include<stdio.h>
int main(){
    int arr[5] = {7,5,8,4,9};
    int brr[5];
    for(int i=0;i<=4;i++){
        brr[i] = arr[4-i];
    }
    for(int i=0;i<=4;i++){
    printf("%d ",brr[i]);
    }
    return 0;
}