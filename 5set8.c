#include<stdio.h>
void main()
{
int n,a[10],i,sum=0,avg;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elemnts");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
avg=sum/n;
printf("the average is %d",avg);
}
