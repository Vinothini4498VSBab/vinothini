#include<stdio.h>
void main()
{
int n,low,high;
printf("enter the number");
scanf("%d",&n);
printf("enter the low and high value");
scanf("%d\t%d",&low,&high);
if((n-low)*(n-high)<=0)
{
printf("yes");
}
else
{
printf("no");
}
}
