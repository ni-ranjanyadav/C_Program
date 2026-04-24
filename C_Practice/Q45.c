#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int lower = 0, upper = 0, other = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(isupper(str[i]))
            upper++;
        else if(islower(str[i]))
            lower++;
        else if(isspace(str[i]))
            other++;
    }
    printf("Uppercase Letter: %d\n", upper);
    printf("Lowercase Letter: %d\n", lower);
    printf("Other Letter: %d", other);
    return 0;
}