#include "daytab.h"

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day) {
    int i, leap;

    leap = (leap%4 == 0 && year%100 != 0) || year%400 == 0;
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day;
}