#include <stdio.h>
int main(){
    int marks[10] = {78,96,58,65,72,86,25,79,68,34};
    for(int i=0;i<10;i++){
        if (marks[i]<35){
            printf("%d ",marks[i]);
        }
    }
    return 0;
} 