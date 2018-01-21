#include<stdio.h>
void  main()
{
int min;
int hr;
min=180;
while(min>60)
{
hr++;
min=min-60;
}
printf("%d\t%d",&hr,&min);
}
