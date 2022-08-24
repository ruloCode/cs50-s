#include <stdio.h>
#include "cs50.h"
int main()
{
  float amount = get_float("Dollar amount:");

  int pennies = amount * 100;

  printf("Pennies : %i\n", pennies);
  
}
