#include <stdio.h>
void main(void) 
{
	int n1,i,j;
	int a[50];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n1;i++)
	{
		int count=0;
		for(j=0;j<n1;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",a[i]);
	}
	}
}
