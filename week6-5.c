#include <stdio.h>
#include <string.h>

struct Circle
{
  int x;
  int y;
  double r;
  double area;
  double length;
};

int main() 
{
  struct Circle c;
  c.x = 0;
  c.y = 0;
  c.r = 10;
  c.area = c.r*c.r*3.14;
  c.length = 2*c.r*3.14;

  printf("원의 넓이 %lf\n", c.area);
  printf("원의 둘레 %lf\n", c.length);

  return 0;
}
