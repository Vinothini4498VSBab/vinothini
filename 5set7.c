#include<stdio.h>
void main()
{
int i,a[50],x,min,max;
printf("enter number of elements");
scanf("%d",&x);
printf("the elements are");
for(i=0;i<x;i++)
scanf("%d",&a[i]);
max=min=a[0];
if(max<a[i])
{
max=a[i];
}
printf("%d",&max);
if(min>a[i])
{
min=a[i];
}
printf("%d",&min);
}
