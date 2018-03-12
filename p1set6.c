#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int l1,l2,i,j,d1,d2,flag=0;
    scanf("%s %s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1=l2)
    {
        for(i=0;i<l1;i++)
        {
            for(j=i+1;j<l2;j++)
            {
                d1=s1[i]-s1[j];
                d2=s2[i]-s2[j];
                if(d1==d2)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
    }
        else
        {
            printf("no");
        }
    if(flag==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
}
