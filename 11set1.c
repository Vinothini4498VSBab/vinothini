#include<stdio.h>
#include<string.h>
void main()
{
    int n,x,i,a=1;
    scanf("%d %d",&n,&x);
    for(i=0;i<x;i++)
    a=a*10;
    printf("%d",n%a);
}
    
