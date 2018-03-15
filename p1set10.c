#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],s1[100];
    int i,n,n1,count=0;
    scanf("%s %s",s,s1);
    n=strlen(s);
    n1=strlen(s1);
    if(n==n1)
    {
    for(i=0;i<n;i++)
    {
            if(s[i]==s1[i])
            {
                count=0;
            }
            else
            {
                count++;
            }
        }
    }
    if(count==1)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
    
}
