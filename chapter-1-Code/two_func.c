
// two_func -- a program using two functions in one file
#include <stdio.h>
void butler (void); //function prototyping. Informs function to be used
int two_func(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) //start of function declaration
{
    printf("You rang,sir?\n");
}
