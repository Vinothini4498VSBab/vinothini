#include<stdio.h>
#include<string.h>
void main()
{
    char str[10]="vinothini",c='*';
    int i,p,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    p=count/2;
    if(count%2==0)
    {
        str[p]='*';
        str[p+1]='*';
        for(i=0;str[i]!='\0';i++)
        {
        printf("%c",str[i]);
        }
    }
    else
    {
        str[p]='*';
        for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}
}
