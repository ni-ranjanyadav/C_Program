#include <stdio.h>
#include <math.h>
int main(){
    int num,originalnum,temp,n,result,remainder;
    for(int num=1;num<=500;num++){
    originalnum = num;
    result = 0;
    n = 0;
    temp = num;
    while(temp!=0){
      temp = temp/10;
      n++;    
    } 
    temp = num;
    while(temp!=0){
        remainder = temp%10;
        result += pow(remainder,n);
        temp /=10;
    }             
    if(result ==  originalnum){
        printf("%d\n",num);
    }                                                                                                                                                                                                      
    }
    return 0;
}