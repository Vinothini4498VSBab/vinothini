#include<stdio.h>
int main()
{
int p,t,sum=0;
scanf("%d",&p);
while(p>0)
{
    t=p%10;
    p=p/10;
    sum=sum*10+t;
}
printf("%d",sum);
}
