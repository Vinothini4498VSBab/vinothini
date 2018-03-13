#include<stdio.h>
#include<string.h>
void main()
{
    char s[10],temp;
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
        if(i%2==0)
        {
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
              printf("%c%c",s[i],s[i+1]);
        }
}
