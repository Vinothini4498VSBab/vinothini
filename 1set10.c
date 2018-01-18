#include<stdio.h>
void main()
{
int count=0,x;
printf("enter th number");
scanf("%d",&x);
while(x!=0)
{
x=x/10;
++count;
}
}
