// area of rectangle
#include<stdio.h>
int main()
{
    int length;
    int breadth;
    int area;
    printf ("enter length of rectangle");
    scanf("%d" , &length);
    printf ("enter the breadth of rectangle");
    scanf("%d" , &breadth);
    area = length * breadth;
    printf("area of rectangle is %d" , area);
}
