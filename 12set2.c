#include<stdio.h>
void main()
{
int a[10],n,i,k;
printf("Enter the n and k");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
    if(a[i]==k)
    {
    printf("yes");
    }
}
