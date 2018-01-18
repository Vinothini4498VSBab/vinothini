#include<stdio.h>
void main()
{
int x,y,z;
scanf("%d%d%d"&x,&y,&z);
if(x>y&&x>z)
{
printf("x is large");
}
else if(y>x&&y>z)
{
printf("y is large");
}
else
{
printf("z is large");
}
}
