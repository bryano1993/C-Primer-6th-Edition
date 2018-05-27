/*Write a program that converts your age in years to days and displays both values. At this
point, don’t worry about fractional years and leap years.*/

#include <stdio.h>

int problem3(void)
{
    int ageInYears, ageInDays;

    ageInYears = 24;
    ageInDays = ageInYears * 365;
    printf("My age in years is: %d\n",ageInYears);
    printf("My age in days is: %d",ageInDays);

    return 0;
}
