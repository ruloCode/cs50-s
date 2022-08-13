#include <stdio.h>
#include "cs50.h"
int main()
{
    // Promt number 1
   int x = get_int("x 1: ");
   // Promt number 2
   int y = get_int("y 2: ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else {
        printf("x is equal to y\n");
    }

   
}
