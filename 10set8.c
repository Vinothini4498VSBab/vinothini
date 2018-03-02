#include<stdio.h>
void main()
{
    int x,a[10],i;
    printf("enter the number");
    scanf("%d",&x);
    printf("elememts");
    for(i=1;i<=x;i++)
    {
    scanf("%d",&a[i]);
}
for(i=1;i<=x;i++)
{
if(a[i]>a[i+1])
{
    printf("%d ",--a[i+1]);
}
}
}
