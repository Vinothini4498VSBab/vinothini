#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number is %d",&count);
}
