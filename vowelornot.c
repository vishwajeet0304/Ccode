#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the alphabet: ");
    scanf("%c" , &alpha);
    if(alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U' || alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    printf("%c is vowel",alpha);
    else
    if(alpha>'A' && alpha<='Z' || alpha>'a' && alpha<='z')  
    printf("%c is consonent",alpha);
    else
    printf("%c is invalid character",alpha);
}