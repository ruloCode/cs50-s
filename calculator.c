#include <stdio.h>
#include "cs50.h"
int main()
{
   // Promt number 1
   long n1 = get_long("number 1: ");
   // Promt number 2
   long n2 = get_long("number 2: ");

   float z = (float)n1 / (float)n2;
   // Perform addition
   printf("%.50f\n", z);
}
