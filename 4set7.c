#include<stdio.h>
void main()
{
int t,a,b;
printf("enter the numbers");
scanf("%d\t%d",&a,&b);
t=a;
a=b;
b=t;
printf("after swap%d,%d",a,b);
}
