//Write a program that asks for your first name, your last name, and then prints the names
//in the format last, first.

#include <stdio.h>
int problem1 (void)
{
    char firstName[40], lastName[40];

    printf("Please Enter your first name and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("%s %s", lastName, firstName);

    return 0;

}
