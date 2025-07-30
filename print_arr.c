/*
Write a program in C to store
n elements in an array 
and print the elements 
using a pointer.
 */

#include <stdio.h>

int main() {
    int elem;
    
    printf("Enter the num of elements req \n");
    scanf("%d", &elem);
    
    int array[elem];
    int *arr[elem];
    
    for(int j=0;j<elem;j++){
        arr[j] = &array[j];
        printf("Val of %d elem : ", j);
        scanf("%d", arr[j]);
    }
    
    for(int i=0; i<elem; i++){
        //arr[i] = &array[i];
       // printf("%p,\n\n", arr[i]);
        printf("\n%d", *arr[i]);
    }
    
    
    return 0;
}