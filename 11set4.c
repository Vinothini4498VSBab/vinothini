#include <stdio.h>

void main() 
{
int x,y,i,pro=1;
scanf("%d %d",&x,&y);
for(i=1;i<=y;i++)
{
pro=pro*x;
}
printf("%d",pro);
}
