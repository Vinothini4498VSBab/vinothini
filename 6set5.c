#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the number:");
    scanf("%d\t%d",&n,&m);
    n=n*m;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
 }
