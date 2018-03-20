#include<stdio.h>
void main()
{
    int l,i,r;
    scanf("%d %d",&l,&r);
    for(i=r;i<10000;i++)
    {
        if(i%1==0&&i%r==0)
        {
            break;
        }
    }
    printf("%d",i);
}
