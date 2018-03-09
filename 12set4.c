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
for(i=0;i<n;i++)
{
  if(i>k && i%2==1)
{
  printf("%d",i);
}
}
}
