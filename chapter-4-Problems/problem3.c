/*Write a program that requests your height in inches and your name, and then displays
the information in the following form:
Dabney, you are 6.208 feet tall
Use type float , and use / for division. If you prefer, request the height in centimeters
and display it in meters.*/

#include <stdio.h>
#define ONEFEET 0.0833333
int problem3 (void)
{
    char firstName[40];
    float height, feet;

    printf("Please Enter your height in inches: ");
    scanf("%f", &height);

    printf("Please Enter your first name: ");
    scanf("%s", firstName);

    feet = height * ONEFEET;
    printf("%s, you are %f feet tall", firstName, feet);

    return 0;
}
