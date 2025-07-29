
// E1; addituon using pointer
#include <stdio.h>

int main() {
    
    int m =10;
    int n =30;
    int *ptr = &m; 
    int *ptrr = &n;
    
    printf("%d\n", *ptr + *ptrr);
    
    *ptr = 20;
    *ptrr = 60;
    
    printf("%d", m+n );
    return 0;
}