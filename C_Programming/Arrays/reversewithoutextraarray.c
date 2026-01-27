#include<stdio.h>
// int main(){
//     int arr[5] = {7,5,8,4,9};
//     for(int i=0;i<=4;i++){
//     }
//     for(int i=0;i<=4;i++){
//     printf("%d ",arr[4-i]);
//     }
//     return 0;
// }

void reverse(int arr[6]){
    int i = 0;
    int j = 5;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[6] = {7,9,5,4,2,6};
    reverse(arr);
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}