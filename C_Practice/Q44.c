#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char *ptr;
    int len;
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);
    len = strlen(str);
    if(str[len-1] == '\n') str[len-1] == '\0';
    ptr = str + strlen(str)-1;
    printf("Reversed string: ");
    while(ptr >= str){
        printf("%C", *ptr);
        ptr--;
    }
    return 0;
}