#include <stdio.h>
    int main(){
        double x1,x2,x3,y1,y2,y3;
        printf("Enter the value of x1,x2,x3,y1,y2,y3 respectively: ");
        scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
        double m1 = (y2-y1)/(x2-x1);
        double m2 = (y3-y2)/(x3-x2);
        if(m1 == m2)
            printf("point lies on straight line.");
            else
            printf("point doesn't lies on straight line.");
    }