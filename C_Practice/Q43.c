#include<stdio.h>
int main(){
    char ch = 'A';
    char *ptr = &ch;
    printf("Alphabet A-Z: ");
    for( *ptr = 'A' ; *ptr <= 'Z' ; (*ptr)++){
        printf("%c ",*ptr);
    }
    return 0;
}