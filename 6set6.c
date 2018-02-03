#include<stdio.h>
void main()
{
char s;
printf("enter the string:");
scanf("%s",&s);
if(((s>='a' || s<='z')||(s>='A' || s<='Z')) && (s>='0' || s<='9'))
{
printf("yes");
}
else
{
    printf("no");
}
}
