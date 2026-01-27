#include<stdio.h>
int main(){
    int arr[11] = {12,5,56,36,31,16,24,28,34,9,11};
    for(int i = 0; i <= 10; i++){
        if(i % 2 != 0){
            arr[i] = arr[i]*2;
        }
        else{
            arr[i] = arr[i] + 10;        }
    }
    for(int i=0;i<=10;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}