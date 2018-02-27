#include<stdio.h>
#include<string.h>
int main()
{
  char a1[100],t;
  int l;
  printf("Enter the string");
  gets(a1);
  l=strlen(a1);
  for(int i=0;i<=l-1;i++)
  {
    for(int j=i+1;j<l;j++)
    {
      if(a1[i]>a1[j])
      {
        t=a1[i];
        a1[i]=a1[j];
        a1[j]=t;
      }
    }
  }
  for(int i=0;i<=l;i++)
  {
    printf("%c",a1[i]);
  }
 return 0;
}
