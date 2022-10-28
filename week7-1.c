#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;

  fp=fopen("CharOut.txt", "w");
  
  if (fp == NULL)
  {
    printf("파일이 없음\n");
    exit(1);
  }

  fputc('A', fp);
  fputc('B', fp);
  fputc('\n', fp);
  fputc(97, fp);
  fputc(99, fp);
  
  fclose(fp);
    
  return 0;
}
//47페이지
