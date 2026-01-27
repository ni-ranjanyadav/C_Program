#include <stdio.h>
    int main(){
        int marks;
        printf("Enter marks you obtained: ");
        scanf("%d",&marks);
        if(marks<=100 && marks>=90)
            printf("Grade - O\n");
        else if(marks<90 && marks>=80)
            printf("Grade - A\n");
        else if(marks<80 && marks>=70)
            printf("Grade - B\n");
        else if(marks<70 && marks>=60)
            printf("Grade - C\n");
        else if(marks<60 && marks>=50)
            printf("Grade - D\n");
        else if(marks<50 && marks>=40)
            printf("Grade - E\n");
        else
            printf("Fail\n");
        return 0;
}