#include <stdio.h>
int main()
{
int a=0,b=1,i;
int n,c;
printf("Enter the number:");
scanf("%d",&n);
printf("The fibonacci series is :%d,%d,",a,b);
c=a+b;
while(c<=n)
{
    printf("%d,",c);
    a=b;
    b=c;
    c=a+b;
}
}

