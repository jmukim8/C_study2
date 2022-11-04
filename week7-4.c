#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *out = fopen("NumberFile.txt", "w");
  int name;
  int d1;

  if (out == NULL)
  {
    printf("파일이 없음\n");
    exit(1);
  }

  printf("이름을 입력하세요: ");
  scanf("%s", &name);
  printf("나이를 입력하세요: ");
  scanf("%d", &d1);
  
  printf("\n\n\n입력 받은 수들은 모두 출력되었습니다.\n");
  printf(">>>>>>>>>>>>>>>>>>>>>>>>\n");
  printf("왜 콘솔에서 찾으세요?");

  fprintf(out, "%d\n", name);
  fprintf(out, "%d살", d1);

  fclose(out);
    
  return 0;
}
//51페이지,문제2-2
