#include<stdio.h>
void main()
{
    int i,n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
