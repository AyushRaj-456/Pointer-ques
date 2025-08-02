/*
Write a program in C
to find the largest
element using Dynamic 
Memory Allocation.

*/
#include <stdio.h>

int main() {
    
    int elem;
    int greater_than=0;
    
    printf("Enter the num of elements req \n");
    scanf("%d", &elem);
    
    int array[elem];
    int *arr[elem];
    
    for(int j=0;j<elem;j++){
        arr[j] = &array[j];
        printf("Val of %d elem : ", j);
        scanf("%d", arr[j]);
    }
    
    for(int i=0;i<elem;i++){
        greater_than=0;
        for(int k=0;k<elem;k++){
            if(*arr[i] > *arr[k] && i!=k){
                greater_than++;
            }
        }
        if(greater_than == elem-1){
            printf("Greatest value = %d", *arr[i]);
        }
    }
    return 0;
}