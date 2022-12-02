#include <stdio.h>

int main(void) 
{
  double i = 0.0;
  double j = 0.0;
  double ij = 0.0;
  double dd = 0.0;
  
  scanf("%lf", &i);
  scanf("%lf", &j);

  ij = (i - 100) * 0.9;
  dd = (j - ij) * 100 / ij;
  
  if(dd <= 10.0)
  {
    printf("정상");
  }
  else if(dd <= 20.0 && dd > 10.0)
  {
    printf("과체중");
  }
  else
  {
    printf("비만");
  }

  
  return 0;
}
//codeup 1228
