#include <stdio.h>

int main() {
    int month;
    
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    
    if (month == 2) {
        printf("The number of days in February is 28 or 29");
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("The number of days in this month is 30");
    } else if
        (month == 1 || month ==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        printf("The number of days in this month is 31");
    } else printf("this is not a month");
}
