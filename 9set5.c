#include <stdio.h>
#include<string.h>
int main()
{
	char a1[50],e1[50],o1[50];
	int i=0,j=0,k=0,m;
	printf("\nEnter the string : ");
	scanf("%s",&a1[i]);
while(a1[i]!='\0')
{
    if(i%2==0)
    {
        e1[j++]=a11[i];
    }
    else
    {
        o1[k++]=a1[i];
    }
    i++;
}
printf("\nThe seperated string is %s %s.",e1,o1);
	return 0;
}
