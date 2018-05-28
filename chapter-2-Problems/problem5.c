/*The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
about 950 grams. Write a program that requests an amount of water, in quarts, and
displays the number of water molecules in that amount.*/

#include <stdio.h>
int problem5(void)
{
    long long water,singleMoleculeOfWater,totalWaterMolecules;

    singleMoleculeOfWater = 3e-23;
    printf("Request an amount of water in quarts. One quart of water is about 950 grams: \n");
    scanf("%e",&water);
    totalWaterMolecules = water * singleMoleculeOfWater;
    printf("Your number of molecules is: %e", water);

    return 0;
}
