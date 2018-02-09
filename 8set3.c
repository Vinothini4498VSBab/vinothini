
#include <stdio.h>
void main()
{
    int n,l,m;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the limit:");
    scanf("%d\t%d",&l,&m);
    if(n>l && n<m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
    
