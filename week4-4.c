#include <stdio.h>

int main(void) 
{
  int i, j;
  int cnt = 0;
  int ar[6][5] = {{23, 22, 27, 21, 24},
                 {21, 22, 25, 24, 23},
                 {20, 23, 22, 21, 24},
                 {25, 26, 24, 27, 28},
                 {26, 24, 28, 29, 26},
                 {27, 28, 29, 26, 27}
                 };
  
  for(i = 0; i < 6; i++)
  {
      for(j = 0; j < 5; j++)
      {
        printf("%d학년 %d반 ",i+1,j+1);
        printf("학생 수: %d\n ",ar[i][j]);
      }
  }


  return 0;
}
60페이지,문제1-1
