#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
 int a[20],len,i=0,j,k;
 char roman1[2];
 printf("Enter the Roman Numeral");
 scanf("%s",roman1);
 len=strlen(roman1);
 for(i=0;i<len;i++)
 {
  if(roman1[i]=='I')
  a[i]=1;
  else if(roman1[i]=='V')
  a[i]=5;
  else if(roman1[i]=='X')
  a[i]=10;
  else if(roman1[i]=='L')
  a[i]=50;
  else if(roman1[i]=='C')
  a[i]=100;
  else if(roman1[i]=='D')
  a[i]=500;
  else if(roman1[i]=='M')
  a[i]=1000;
  else
  {
printf("\nPlease enter correct roman1 numeral.");
exit(0);
  }
}
k=a[len-1];
for(i=len-1;i>0;i--)
{
  if(a[i]>a[i-1])
  k=k-a[i-1];
  else if(a[i]==a[i-1] || a[i]<a[i-1])
  k=k+a[i-1];
}
printf("\nEquivalent is %d ",k);
return 0;
}
