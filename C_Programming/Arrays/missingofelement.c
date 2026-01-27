#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,3,8,4,9,3,5};
    int x = 3;
    bool flag = false; //false means not present 
    //int check = 0; //element not present in array
    for(int i=0;i<=6;i++){      //for print only last element we have to reverse the for loop 
        if(arr[i]==x){
            flag = true;  //true means present 
            //check = 1; //element is present in array
            break;
        }
    }
    if(flag==true){
        printf("%d is present in array\n",x);
    }
    else{
        printf("%d is not present in array",x);
    }
    return 0;
}