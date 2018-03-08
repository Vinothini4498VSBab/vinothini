#include<stdio.h>
void main()
{
int n,r,count=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    count++;
    n=n/10;
}
    printf("Total digit :%d",count);
}
