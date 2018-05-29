/* width.c -- field widths */
#include <stdio.h>
#define PAGES 959
int width(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%20d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}
