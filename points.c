#include <stdio.h>
#include "cs50.h"
int main()
{
   const int MINE = 2;
   int point = get_int("How many points did you lose?\n");
   

    if (point < MINE)
    {
        printf("Your lost fewer points than me\n");
    }
    else if (point > MINE)
    {
        printf("Your lost more points than my\n");
    }
    else {
        printf("We lost the same points\n");
    }

   
}
