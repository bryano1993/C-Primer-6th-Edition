/* Write a program that creates an integer variable called toes . Have the program set toes
to 10 . Also have the program calculate what twice toes is and what toes squared is. The
program should print all three values, identifying them. */

#include <stdio.h>

int problem6(void)
{
    int toes,twiceToes,squaredToes;

    toes = 10;
    twiceToes = toes * 2;
    squaredToes = toes * toes;
    printf("toes is: %d\n", toes);
    printf("twice toes is: %d\n", twiceToes);
    printf("toes squared is: %d", squaredToes);

    return 0;

}
