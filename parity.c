#include <stdio.h>
#include "cs50.h"
int main()
{

    int n = get_int("n: \n");

    // if n is even
    if (n % 2 == 0)
    {
        printf("even \n");
    }
    else
    {
        printf("odd \n");
    }

  
}
