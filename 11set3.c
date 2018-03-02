#include <stdio.h>

void main() 
{
	int i;
	char a1[50];
	printf("enter the string");
	scanf("%[^\n]s",a1);
	for(i=0;a1[i]!='\0';i++)
	{
	    if(i==0)
	    a1[i]=toupper(a1[i]);
	    if(a1[i]==' ')
	    a1[i+1]=toupper(a1[i+1]);
	   
	}
	printf("%s",a1);
}
