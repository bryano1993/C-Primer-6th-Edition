/*Write a program that asks you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code.*/

#include <stdio.h>
int problem1(void)
{
    int code;

    printf("Please enter an ASCII code value: ");
    scanf("%d", &code);
    printf("The character for %d is %c.\n", code, code);

    return 0;
}
