#include <stdio.h>
int main()
{
    int n,c,x;
    printf("Enter the two number");
    scanf("%d\t%d",&n,&c);
    x=n*c;
    if(n==c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
