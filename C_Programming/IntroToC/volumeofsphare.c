#include<stdio.h>
    int main(){
        int r;
        printf("Enter the value of radius: ");
        scanf("%d",&r);
        float volume = 4*3.14*r*r*r/3;
        printf("volume of sphare is %f",volume);
        return 0;
    }