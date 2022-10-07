#include <stdio.h>

int main(void) 
{
  int i, j;
  int cnt = 0;
  int ar[6][9] = {{ 0, 0, 0, 1, 0, 0, 0, 0, 0},
                 { 0, 0, 0, 0, 0, 0, 0, 2, 0},
                 { 0, 0, 0, 0, 1, 0, 0, 0, 0},
                 { 0, 2, 0, 1, 0, 0, 1, 0, 0},
                 { 0, 0, 0, 1, 0, 0, 0, 0, 0},
                 { 0, 0, 1, 0, 0, 0, 1, 0, 0}
                 };
  
  for(i = 0; i < 6; i++)
  {
      for(j = 0; j < 9; j++)
      {
          if(ar[i][j]==1)
          {
            cnt++;
          }
      }
  }
  printf("1의 개수: %d\n", cnt);

  for(i = 0; i < 6; i++)
  {
      for(j = 0; j < 9; j++)
      {
          if(ar[i][j]==2)
          {
            printf("2의 행과 열의 번호: %d %d\n", i,j);
          }
      }
  }

  for(i = 0; i < 6; i++)
  {
      for(j = 0; j < 9; j++)
      {
          if(ar[i][j]==2)
          {
            ar[i-1][j] = 5;
            ar[i+1][j] = 5;
            ar[i][j-1] = 5;
            ar[i][j+1] = 5;
          }
      }
  
  }
  
  for(i = 0; i < 6; i++)
    {
      for(j = 0; j < 9; j++)
        {
          printf("%d ", ar[i][j]);
        }
      printf("\n");
    }

  for(i = 0; i < 6; i++)
    {
      for(j = 0; j <9; j++)
        if(ar[i][j] == 0)
        {
          ar[i][j] = 1;
        }
        else
        {
          ar[i][j] = 0;
        }
    }

  printf("\n\n");
  
  for(i = 0; i < 6; i++)
    {
      for(j = 0; j < 9; j++)
        {
          printf("%d ",ar[i][j]);
        }
      printf("\n");
    }
  return 0;
}
