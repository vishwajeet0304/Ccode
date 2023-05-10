#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the alphabet: ");
    scanf("%c",&alpha);
    if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
    {
        printf("%c is alphabet",alpha);
    }
    else 
    printf("%c is invalid character",alpha);
}