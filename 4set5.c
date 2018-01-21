#include<stdi.h>
void main()
{
char str[400];
int i,digit=0;
printf("enter the string");
scanf("%c",str);
for(i=0;str[i]!='\0';i++)
{
  if(str[i]>=0 && str[i]<=9)
  {
    digit++;
  }
  printf("%d",&digit);
}
}
