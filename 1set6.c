#include<stdio.h>
void main()
{
int x;
print("enter the year");
scan("%d",&x);
if(x%4==0)
{
printf("leap year");
}
else
{
printf("not leap year");
}
}
