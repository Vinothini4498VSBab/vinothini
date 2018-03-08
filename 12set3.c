#include<stdio.h>
void main()
{
int a[10],n,i,k,count=0;
printf("Enter the n and k");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
    if(a[i]==k)
    {
    count++;
    }
    printf("%d",count);
}
