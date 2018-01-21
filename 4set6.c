#include<stdio.h>
void main()
{
char str[50];
int i,spl;
printf("enter the string");
scanf("%c",&str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]='Z')||(str[i]>='0' && str[i]<='9'))
{
break;
}
else 
{
spl++;
}
printf("%d",&spl);
}
}
