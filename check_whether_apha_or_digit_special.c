#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
    {
       printf("%c is aplhabet",ch);
    }
    else if ((ch >='0' && ch <='9'))
    {
        printf("%c is digit",ch);
    }
    else printf("%c is a special character",ch);
    
}
