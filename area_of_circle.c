#include <stdio.h>
#include <math.h>

float dis;
float c_area;
float radius;

float e_dis(int x1, int x2, int y1, int y2)
{
    dis = sqrt(   ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))  );
    radius = dis*dis;
    return radius;    
} 

float area(  float(*area_ptr)(int,int,int,int)  )
{
    c_area = (3.14* (area_ptr(10,5,8,4)) );
    return c_area;
}

int main() {
    
    float(*ptr)(int,int,int, int);
    ptr = &e_dis;
    printf("Edis - %f", e_dis(10,5,8,4));
    printf("\n Area of Ciscle whose radius\n is equal to the dis = %f", area(ptr));
    return 0;
}
