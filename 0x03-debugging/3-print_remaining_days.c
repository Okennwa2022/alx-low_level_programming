#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

printf("invalid date: %2d/%2d/%04d\n", month, day - 31, year);
}
else
{
printf("day of the year: %d\n", day);
printf("remaining days: %d\n", 365 - day);
}
}
}
