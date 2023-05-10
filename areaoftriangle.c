#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float area;
    printf("enter the length");
    scanf("%f" , &length);
    printf("enter the breadth");
    scanf("%f" , &breadth);
    area = 1.0/2.0 * length * breadth;
    printf("area of rectangle is %f" , area);
}