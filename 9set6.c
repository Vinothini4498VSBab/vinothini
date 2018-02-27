#include<stdio.h>
void main()
{
    char a[100];
    int i,flag=0;
    printf("Enter the tring");
    scanf("%c",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==a[i+1])
        {
            flag=1;
            break;
        }
    }
        if(flag==1)
        {
            printf("FALSE");
        }
        else
        {
            printf("TRUE");
        }
}
