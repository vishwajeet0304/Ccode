#include<stdio.h>
int main()
{
 int num1;
  printf("enter the number: ");
 scanf("%d", &num1);
 if ((num1 % 5== 0) && (num1 % 11==0))
 {
    printf("number is divisible by 5 and 11 both" );
 }
else if ((num1 % 5==0 ))
{
 printf("number is divisible by 5 but not divisible by 11");
}
else  if ((num1 % 11==0))
{
    printf("number is divisible by 11");
}
else printf("number is not divisible by 5 and 11"); 
}