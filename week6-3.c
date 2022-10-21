#include <stdio.h>

struct Circle
  {
    int x;
    int y;
    double r;
  };

int main() 
{
  struct Circle c1, c3, c4;

  c1.x = 23;
  c1.y = 12;
  c1.r = 12.3;
  printf("c1의 좌표( %d , %d ), 반지름 : %lf\n", c1.x, c1.y, c1.r);
  struct Circle c2 = {3, 4, 21.23};
  printf("c2의 좌표( %d , %d ), 반지름 : %lf\n", c2.x, c2.y, c2.r);
  c3 = c1;
  printf("c3의 좌표( %d , %d ), 반지름 : %lf\n", c3.x, c3.y, c3.r);
  c4.x = c2.y;
  c4.y = c2.x;
  printf("c4의 좌표( %d , %d ), 반지름 : %lf", c4.x, c4.y, c4.r);
  return 0;
}
//30페이지,문제1-1,1-2,1-3,1-4
