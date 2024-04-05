#include<stdio.h>

int main(){
    char s1[100];
    int i=0,length=0;

    printf("Enter a string: ");
    gets(s1);

    while (s1[i]!='\0'){  // '\0' is the null character which indicates end of string
        i++;
        length++;
    }
    

    printf("length of string is: %d\n",length);
    printf("Reversed string is: ");
    
    for ( i = length-1; i >= 0; i--)
    {
        printf("%C",s1[i]);
    }
    printf("\n");

    return 0;
}