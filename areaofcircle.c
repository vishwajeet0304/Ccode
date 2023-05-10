//area of circle
#include<stdio.h>
int main()
{
    const float pie = 3.124;
    float radius ;
    float area;
    printf("enter the radius of circle" );
    scanf("%f" , &radius);
    area = pie * radius * radius ;
    printf("area of circle is %f" , area); 
}