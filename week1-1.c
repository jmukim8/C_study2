#include <stdio.h>

int main(void) 
{
  int num[ ] = {5, 2, 6, 7, 8, 9, 4, 3, 1};
  int page[10] = {123, 57, 67, 86};

  for(int i = 0; i < 9; i++)
    {
      printf("%d ", num[i]);
    }

   for(int j = 0; j < 10; j++)
    {
      printf("%d ", page[j]);
    }
  return 0;
}
10
