#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if (c>='a' && c<='z' )
    {
    printf("%c is lowercase",c);
    }
    else if (c>='A' && c<='Z')
    printf("%c IS UPPERCASE",c);
    else printf("enter character is invalid");

}