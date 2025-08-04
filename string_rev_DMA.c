/*
Write a program in
C to print a string
in reverse using a pointer.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char *ptr = (char *)malloc(sizeof(char)*100);
    
    printf("Enter your string - ");
    fgets(ptr,100, stdin);
    
    int len = strlen(ptr);
    
    //printf("Length = %d - %c\n" , len-1, ptr[len-2]);
    
    for(int i=len-2; i>=0;i--){
        printf("%c", ptr[i]);
    }
    
    return 0;
}