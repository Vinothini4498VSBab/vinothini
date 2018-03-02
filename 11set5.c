#include<stdio.h>
void main()
{
char a1;
int b;
printf("enter the character");
scanf("%c",&a1);
if((a1>='a')&&(a1<='z'))
{
printf("%d",a1-96);
}
else
{
    printf("%d",a1-64);
}
}
