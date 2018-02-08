#include <stdio.h>
void main()
{
   int a,b;
   scanf("%d\t%d",&a,&b);
   a=a+b;
   if(a%2==0)
   {
       printf("even");
   }
   else
   {
       printf("odd");
   }
}
