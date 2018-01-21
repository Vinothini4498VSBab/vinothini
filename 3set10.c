#include<stdio.h>
void main()
{
int h,h1,h2,m,m1,m2;
printf("enter first time");
scanf("%d\t%d",&h1,&m1);
printf("enter the second time");
scanf("%d\t%d",&h2,&m2);
h=h1-h2;
m=m1-m2;
printf("%d\t%d",&h,&m);
}
