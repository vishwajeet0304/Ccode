#include<stdio.h>
int main()
{
    char month;
    printf("enter your month no: ");
    scanf("%c", &month);
    switch (month)
    {
        case '1' :
       // month == "january";
        printf("january has 31 days");
        break;
        case '2':
       // month == "february";
        printf("february has 28 days and if it is a leap year then it has 29 days");
        break;
        case '3':
       // month =="march";
        printf("march has 31 days");
        break;
        case '4':
        //month == "april";
        printf("april has 30 days");
        break;
        case '5':
        month == "may";
        printf("may has 31 days");
        break;
        case '6':
        //month == "june";
        printf("june has 30 days");
        break;
        case '7':
        //month == "july";
        printf("july has 31 days");
        break;
        case '8':
        //month == "august";
        printf("august has 31 days");
        break;
        case '9':
        //month == "september";
        printf("september has 30 days");
        break;
        case '10':
        //month == "october";
        printf("october has 31 days");
        break;
        case '11':
       // month == "november";
        printf("november has 30 days");
        break;
        case '12' :
       // month == "december";
        printf("december has 31 days");
        break ;
        default :
        printf("enter value is not a month");
    }

}