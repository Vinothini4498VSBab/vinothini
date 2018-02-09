#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i,a=0,b=0,c=0,d=0,e=0;
    printf("Enter the string:");
    scanf("%c",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==('a'))
        a=1;
        if(str[i]==('e'))
        b=1;
        if(str[i]==('i'))
        c=1;
        if(str[i]==('o'))
        d=1;
        if(str[i]==('u'))
        e=1;
    }
    if(a==1 || b==1 || c==1 || d==1 || e==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
