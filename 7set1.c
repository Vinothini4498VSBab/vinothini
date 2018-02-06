#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int n,i;
    printf("Enter the string");
    gets(s);
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
}
