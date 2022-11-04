#include <stdio.h>

int ga;
int gb;

void Sum();
void Difference();

int main() 
{
  printf("정수를 2개 입력하세요 : ");
  scanf("%d %d", &ga, &gb);
  Sum();
  Difference();
}

void Sum()
{
  printf("%d + %d = %d\n", ga, gb, ga + gb);
}

void Difference()
{
  int diff;
  if (ga > gb)
  {
    diff = ga - gb;
    printf("%d - %d = ", ga, gb);
  }
  else
  {
    diff = gb - ga;
    printf("%d - %d = ", gb, ga);
  }
  printf("%d ", diff);
}
//62페이지
