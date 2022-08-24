#include <stdio.h>
#include "cs50.h"

int main()
{

    int n;

    do
    {
        n = get_int("Size:");
    } while (n < 1);

    // For each row
    for (size_t i = 0; i < n; i++)
    {
        // for each column
        for (size_t j = 0; j < n; j++)
        {
            // print a brick
            printf("#");
        }
        // Move to next row
        printf("\n");
    }
}
