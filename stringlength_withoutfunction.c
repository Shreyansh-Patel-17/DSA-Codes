#include <stdio.h>

int main(){
    char str[100];
    int length=0,i=0;

    printf("Enter a string: ");
    scanf("%s",&str);

    while (str[i]!='\0'){
        i++;
        length++;    
    }
    
    printf("length of string is: %d",length);

    return 0;
}