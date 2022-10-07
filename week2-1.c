#include <stdio.h>

int main(void) 
{
  char ch1;

  char str[10] = {0,};
  printf("hello쓰셈:");
  scanf("%s", str);
  int i = 0;

  while (str[i])
    {
      str[i] = str[i] - 32;
      i++;
    }

  printf("%s", str);
  return 0;
}
33페이지,문제5
