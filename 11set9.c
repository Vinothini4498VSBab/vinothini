#include<stdio.h>
void main()
{
int a[10],i,n,temp;
printf("Enter the total number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<temp)
    {
    temp=a[i];
    }
}
    printf("%d",temp);
}
