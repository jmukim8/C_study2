#include <stdio.h>

struct Coordi
{
  int x;
  int y;
};

struct Circle
{
  struct Coordi cen;
  double r;
};

int main() 
{
  struct Circle c1;
  struct Circle c2 = {{4, 5}, 12.4};
  struct Circle c3;

  c1.cen.x = 5;
  c1.cen.y = 3;
  c1.r = 7.7;
  printf("x %d, ", c1.cen.x);
  printf("y %d, ", c1.cen.y);
  printf("r %lf\n", c1.r);

  printf("x %d, ", c2.cen.x);
  printf("y %d, ", c2.cen.y);
  printf("r %lf\n", c2.r);

  printf("x ");
  scanf("%d", &c3.cen.x);
  printf("y ");
  scanf("%d", &c3.cen.y);
  printf("r ");
  scanf("%lf", &c3.r);
  printf("x %d, ", c3.cen.x);
  printf("y %d, ", c3.cen.y);
  printf("r %f\n", c3.r);
  
  return 0;
}
//35페이지,문제2-1,2-2,2-3
