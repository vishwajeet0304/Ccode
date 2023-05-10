#include <stdio.h>
#include <string.h>

int main() {
    char month[20];
    int days;

    printf("Enter the month name: ");
    scanf("%s", month);

    if (strcmp(month, "January") == 0) {
        days = 31;
    } else if (strcmp(month, "February") == 0) {
        days = 28;
    } else if (strcmp(month, "March") == 0) {
        days = 31;
    } else if (strcmp(month, "April") == 0) {
        days = 30;
    } else if (strcmp(month, "May") == 0) {
        days = 31;
    } else if (strcmp(month, "June") == 0) {
        days = 30;
    } else if (strcmp(month, "July") == 0) {
        days = 31;
    } else if (strcmp(month, "August") == 0) {
        days = 31;
    } else if (strcmp(month, "September") == 0) {
        days = 30;
    } else if (strcmp(month, "October") == 0) {
        days = 31;
    } else if (strcmp(month, "November") == 0) {
        days = 30;
    } else if (strcmp(month, "December") == 0) {
        days = 31;
    } else {
        printf("Invalid month name. Please try again.");
        return 0;
    }

    printf("The number of days in %s is %d.\n", month, days);
    return 0;
}
