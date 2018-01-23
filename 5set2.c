#include<stdio.h>
void main()
{
char s1[20],s2[50];
int p,q,t1,t2;
t1=s1[20];
t2=s2[50];
printf("enter the strings");
gets(s1);
gets(s2);
p=strlen(s1);
q=strlen(s2);
if(p>q)
{
t1=p;
printf("%c",t1);
}
else if(q>p)
{
t2=q;
printf("%c",&t2);
}
else
{
printf("%c",&t1);
}
}
