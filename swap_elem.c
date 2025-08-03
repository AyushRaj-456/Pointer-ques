/*
  Write a program in C to swap
elements using call by reference.
 
*/
 

#include <stdio.h>

int main() {
    
    int z=0;
    int *ptrz = &z;
    int array[4]={0,1,2,3};
    int array2[4];
    int *arrptr[4];
    
    for(int i=0;i<4;i++){
        arrptr[i] = &array2[i];
        printf("%d\n", array[i]);
    }
    printf("\n");
    
    for(int j=0;j<4;j++){
        
        *arrptr[j] = array[4-(j+1)];
        
    }
    
    for(int k=0; k<4;k++){
        printf("%d\n", array2[k]);
    }
    
    
    return 0;
}