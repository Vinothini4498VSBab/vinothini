#include<stdio.h>
int main()
{
int n1,i;
scanf("%d",&n1);
for(i=n1;;i++)
{
 if(i%10==0)
 {
 printf("%d",i);
 break;
 }
}
return 0;
}
