#include<stdio.h>
void main()
{
char str[80];
int i,count=0;
printf("entre the string");
scanf("%c',&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]='\n')
count++;
}
printf("%d",&count+1);
}
