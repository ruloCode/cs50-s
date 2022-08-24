#include <stdio.h>
#include "cs50.h"
int main()
{
  int n = 3;
  int scores[n];

  for (size_t i = 0; i < n; i++)
  {
    scores[i] = get_int("Score: ");
  }

  printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
