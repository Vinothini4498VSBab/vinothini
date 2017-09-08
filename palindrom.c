#include<stdio.h>
void main()
{
int n,r,sum=o;
printf("enter the number");
scanf("%d",&n);
{
n=n/10;
r=n%10;
sum=sum*10+r;
}
if(n==sum)
{
printf("palindrom");
}
}
