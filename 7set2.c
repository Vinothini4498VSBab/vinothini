#include <stdio.h>

int main()
{
    char c;
    printf("enter the string");
    scanf("%s",&c);
    if(c=='0' || c=='1')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
