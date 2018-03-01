#include<stdio.h>
int main()
{
int p,t,sum=0;
scanf("%d",&p);
{
    t=p%10;
    sum=sum+t;
    p=p/10;
}
printf("%d",sum);
}
