#include<stdio.h>
int main(){
    int arr[7] = {12,8,9,5,15,3,1};
    int x = 4;
    int count = 0;
    for(int i = 0;i <= 6;i++){
        if(arr[i] > x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}