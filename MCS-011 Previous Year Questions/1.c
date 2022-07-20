// Write an algorithm and draw a corresponding flow chart to check whether the given year is a leap year or not.

/* Algorithm
1. If the year is divisible by 4 and not by 100, it is a leap year,
2. If a year is divisible by 400, then is a leap year,
3. Else it's not a leap year.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check whether it is leap year or not: ");
    scanf("%d", &year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);

    return 0;
}