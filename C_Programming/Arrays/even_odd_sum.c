#include<stdio.h>
int main(){
    int arr[7] = {123,545,565,58,56,39,34};
    int sumEven = 0;
    int sumOdd = 0;
    int sum,result;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven+=arr[i];
        }
        else{
            sumOdd+=arr[i];
        }
        sum = sumEven+sumOdd;
        result = sumEven - sumOdd;
    }
    printf("%d\n",sumEven);
    printf("%d\n",sumOdd);
    printf("%d\n",sum);
    printf("%d\n",result);
    return 0;
}