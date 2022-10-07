#include <stdio.h>

int main(void) 
{
  int ar[3][4] = { 0, };
  int i, j;

  scanf("%d", &ar[0][0]);
  scanf("%d", &ar[2][3]);

  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 4; j++)
        {
          printf("%3d ", ar[i][j]);
        }
        printf("\n");
    }

  return 0;
}
