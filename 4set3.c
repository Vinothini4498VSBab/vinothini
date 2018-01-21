#include<stdio.h>
void main()
{
char str[100];
int i,count;
scanf("%c",&str);
for(i=0;str[i]!=0;i++)
{
if(str[i]==' ')
count++;
}
printf("%d",&count);
}
