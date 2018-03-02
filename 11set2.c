#include <stdio.h>
int main(void)
{
int x;
scanf("%d",&x);
while(x%2==0)
{
	x=x/2;
}
printf("%d",x);
return 0;
}
