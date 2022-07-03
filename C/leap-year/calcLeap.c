#include <stdio.h>
#include <stdbool.h>
int leapyear(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    } else if (year % 100 == 0 && year % 400 ==0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int year;
    printf("Year to check: ");
    scanf("%i", &year);
    if (leapyear(year)) {
        printf("%i is a leap year\n", year);
    } else {
        printf("%i is not a leap year\n", year);
    }
    return 0;
}
