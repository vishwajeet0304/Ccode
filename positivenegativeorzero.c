#include<stdio.h>
int main()
{
    int num1;
    printf("enter the number : ");
    scanf("%d", &num1);
    if (num1>0)
    {
        printf("%d is positive",num1);
    }
    else if (num1<0)
    {
        printf("%d is negative",num1);
    }
    else 
        printf("entered value is zero");
}