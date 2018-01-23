#include<stdio.h>
void main()
{
int n;
int f(o)=0,f(1)=1,f(n);
printf("enter the number");
scanf("%d",&n);
f(n)=f(n-2)+f(n-1);
printf("%d",&f(n));
}
