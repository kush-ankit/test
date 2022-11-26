#include <stdio.h>

int main()

{
  for (int i = 1; i < 300; i++)
  {
    int isDivided = 0;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isDivided = 1;
        break;
      }
    }

    if (!isDivided)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}