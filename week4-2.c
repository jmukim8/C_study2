#include <stdio.h>

int main(void) 
{
  int ar1[3][4] = {0};
  int ar2[ ][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int ar3[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int i, j;

  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 4; j++)
        {
          printf("%3d ", ar3[i][j]);
        }
        printf("\n");
    }

  return 0;
}
//58페이지
