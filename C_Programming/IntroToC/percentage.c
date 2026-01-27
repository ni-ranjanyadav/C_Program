#include<stdio.h>
    int main(){
        float maths,physics,chem,eng,hindi;
        printf("Enter the maths marks: ");
        scanf("%f",&maths);
        printf("Enter the physics marks: ");
        scanf("%f",&physics);
        printf("Enter the chem marks: ");
        scanf("%f",&chem);
        printf("Enter the eng marks: ");
        scanf("%f",&eng);
        printf("Enter the hindi marks: ");
        scanf("%f",&hindi);
        float percentage = (maths+physics+chem+eng+hindi)/5;
        printf("percentage is %f",percentage);
        return 0;
    }