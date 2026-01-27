#include <stdio.h>

int is_palindrome(int arr[5]){
    int i = 0;
    int j = 4;
    while (i < j){
        if (arr[i] != arr[j]){
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // Is a palindrome
}

int main(){
    int arr[6] = {5,4,6,4,5};
    if (is_palindrome(arr)){
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}