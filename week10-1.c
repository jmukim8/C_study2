#include <stdio.h>

int main() 
{
  int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  int *pr;

  printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));

  for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
  {
    printf("%d \n", ar[i]);
  }

  pr = (int*)malloc(sizeof(int)*20);
  for(i = 0; i < 20; i++)
  {
    pr[i] = i+1;
    printf("%d ", pr[i]);
  }
  return 0;
}
//47페이지
