#include <stdio.h>
int main()
{
    int n[20],i,x;
    printf("Enter the number");
    scanf("%d",&x);
    printf("Enter the elements in a array");
    for(i=0;i<x;i++)
    scanf("%d",&n[i]);
    for(i=0;i<x;i++)
   {
       if(n[i]%2==0)
       {
           printf(" ");
       }
       else
      {
          printf("%d",n[i]);
      }
   }
}
