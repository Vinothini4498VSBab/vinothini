#include<stdio.h>
void main()
{
    char s[20];
    int n,i;
    printf("Enter the string and number of time");
    scanf("%s\t",&s);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s\n",s);
    }
    
}
