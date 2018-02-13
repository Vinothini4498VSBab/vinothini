#include <stdio.h>
int main()
{
    int n,i,c;
    printf("Enter the number");
    scanf("%d",&n);
    printf("enter the number to be checked");
    scanf("%d",&i);
    if(n%i==0)
    {
        printf("yes");
    }
   else
   {
       printf("no");
   }
}
