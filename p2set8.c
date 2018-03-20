#include<stdio.h>
int main()
{
	int n1,i,j,count=0;
	scanf("%d",&n1);
	for(i=2;i<n1;i++)
	{
		if(n1%i==0)
		{
			for(j=2;j<i/2;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				printf("%d\t",i);
			}
		}
	}
}
