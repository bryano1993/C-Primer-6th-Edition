/*There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
your age in years and then displays the equivalent number of seconds.*/

#include <stdio.h>
int problem4(void)
{
    long long age,secondsInAYear,newAge;

    secondsInAYear =  31,536,000 ;
    printf("How old are you? ");
    scanf("%e", &age);
    newAge = age * secondsInAYear;
    printf("Your age in years is: %e", newAge);

    return 0;
}
