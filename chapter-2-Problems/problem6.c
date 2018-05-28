/*There are 2.54 centimeters to the inch. Write a program that asks you to enter your
height in inches and then displays your height in centimeters. Or, if you prefer, ask for
the height in centimeters and convert that to inches.*/

#include <stdio.h>
int problem6(void)
{
    float inches,convertedHeight;

    printf("Enter your height in inches: ");
    scanf("%f", &inches);
    convertedHeight = inches * 2.54;
    printf("Your height in centimeters is %f", convertedHeight);

    return 0;
}
