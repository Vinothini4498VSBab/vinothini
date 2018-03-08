#include<stdio.h>
void main()
{
int a[10],n,i,k,min;
printf("Enter the n and k");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
    if(a[i]>k)
    {
    min=k;
    }
    printf("%d",min);
}
