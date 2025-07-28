#include <stdio.h>

int sum(int a, int b){
    
    return a+b;
}

func_hell( int (*ptr)(int, int) ){
        printf("Hello - %d", ptr(3,3));
    }
    
    func_gm( int (*ptr)(int, int) ){
        printf("GM - %d", ptr(6,6));
    }

int main() {
    
    //int (*ptr)(int, int);
    int (*fptr)(int, int);
    fptr = &sum;
    
    func_hell(fptr);
    printf("\n");
    func_gm(fptr);
    return 0;
}