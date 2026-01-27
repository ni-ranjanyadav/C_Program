#include<stdio.h>
void reverse(int arr[],int a,int b ){
    
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
    reverse(arr,0,4);
    // for(int i=1,j=5;i<=j;i++,j--){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}