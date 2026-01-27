#include<stdio.h>
int main(){
    int arr[7] = {3,5,8,9,3,6,0};
    for(int i=0;i<=6;i++){
        for(int j =i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate \n",arr[i]);
                break;
            }
        }
    }
    return 0;
}