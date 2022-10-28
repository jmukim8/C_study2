#include <stdio.h>
#include <string.h>

struct Address
 {
   char name[10];
   char phon[20];
   char home[50];
 };

int main() 
{
  struct Address man1;
  
  strcpy(man1.name, "김예준");
  strcpy(man1.phon, "010-0000-0000");
  strcpy(man1.home, "경기도 수원시 영통구 수원1동");
  printf("이름: %s\n", man1.name);
  printf("전화: %s\n", man1.phon);
  printf("주소: %s\n", man1.home);

  struct Address man2 = {"씨큐브", "010-0000-0000", "경기도 수원시 영통구 수원1동"};

  retrun 0;
}
