/*In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?*/

#include <stdio.h>
int problem7(void)
{
    float volumeInCups,pint,ounce,tablespoons,teaspoons;

    printf("Volume in cups? ");
    scanf("%f", &volumeInCups);
    pint = volumeInCups / 2;
    ounce = volumeInCups * 8;
    tablespoons = ounce * 2;
    teaspoons = tablespoons * 3;
    printf("pints: %f\n", pint);
    printf("ounces: %f\n", ounce);
    printf("tablespoons: %f\n",tablespoons);
    printf("teaspoons: %f\n",teaspoons);

    return 0;
}
