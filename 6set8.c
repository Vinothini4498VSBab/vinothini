#include<stdio.h>
void main()
{
int x,y;
scanf("%d\t%d",&x,&y);
x=x^y;
y=x^y;
x=x^y;
printf("%d\t%d",x,y);
}
