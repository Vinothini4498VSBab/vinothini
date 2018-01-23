#include<stdio.h>
void main()
{
int n;
int fo=0,f1=1,f(n);
printf("enter the number");
scanf("%d",&n);
f(n)=f(n-2)+f(n-1);
printf("%d",&f(n));
}
