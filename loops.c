#include <stdio.h>
#include "cs50.h"

void meow(void);
void MeowParams(int n);

int main()
{

    MeowParams(3);
}

void meow(void)
{
    printf("Miau\n");
}

void MeowParams(int n)
{
    for (int forCounter = 0; forCounter < n; forCounter++)
    {
        meow();
    }
}