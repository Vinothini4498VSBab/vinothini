#include<stdio.h>
int main()
{
int p,i,flag=0;
scanf("%d",&p);
for(i=2;i<=p;i++)
{
    if(p%i==0)
    flag=1;
}
if(flag!=1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
