#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}

