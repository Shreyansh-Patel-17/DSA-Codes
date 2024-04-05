#include<stdio.h>

int main(){
    char src[100],dest[100];
    int i=0;

    printf("Enter the source string: ");
    scanf("%s",src);

    /* Copying characters from source to destination one by one */
    while (src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    
    dest[i]='\0'; //Adding null character at the end of destination string  

    printf("Source String: %s \n",src);  
    printf("Destination String: %s \n",dest);  

    return 0; 
}