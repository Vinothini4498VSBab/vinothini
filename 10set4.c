#include <stdio.h>
int main()
{
    int a[10],i,n,k;
    printf("enter the k and n value");
    scanf("%d\t%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
    return 0;
}
