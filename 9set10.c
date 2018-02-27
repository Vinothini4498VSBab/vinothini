#include<stdio.h>
#include<string.h>
int main()
{
  char a1[100];
  printf("enter the string");
  gets(a1);
  if(a1>'0'||a1<'9')
  {
      printf("%c",a1);
  }
  
 return 0;
}
