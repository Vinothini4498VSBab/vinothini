#include<stdio.h>
void main()
{
    int a,t,pro=1;
    scanf("%d",&a);
    while(a>0)
    {
      t=a%10;
      pro=pro*t;
      a=a/10;
    }
    printf("%d",pro);
}
    
